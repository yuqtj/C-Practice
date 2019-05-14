#include "pch.h"
#include "SortTool.h"

void bubbleSort(std::vector<int>& arrays, int size)
{
	for (int i = 0; i < size; i++)
	{
		bool exchange = false;
		for (int j = 0; j < size - 1; j++)
		{
			if (arrays[j + 1] < arrays[j])
			{
				int temp = arrays[j];
				arrays[j] = arrays[j + 1];
				arrays[j + 1] = temp;

				exchange = true;
			}
		}

		if (exchange == false)
		{
			return;
		}
	}
}

void quickSort(std::vector<int>& arrays, int low, int high)
{
	if (low < high)
	{
		int lowTemp = low;
		int highTemp = high;
		int firstElement = arrays[low];

		while (low < high)
		{
			while (low < high && arrays[high] > firstElement)
			{
				high--;
			}
			arrays[low] = arrays[high];

			while (low < high && arrays[low] <= firstElement)
			{
				low++;
			}
			arrays[high] = arrays[low];
		}

		arrays[low] = firstElement;
		quickSort(arrays, lowTemp, low - 1);
		quickSort(arrays, high + 1, highTemp);
	}
}

void headSort(std::vector<int>& arrays, int size)
{
	// 1.构建大顶堆，从第一个非叶子节点从下至上，arrays[size / 2 - 1]是第一个非叶子节点
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		adjustHeap(arrays, i, size);
	}

	// 2. 调整堆结构 + 交换堆顶元素
	for (int i = size - 1; i > 0; i--)
	{
		int temp = arrays[0];
		arrays[0] = arrays[i];
		arrays[i] = temp;

		adjustHeap(arrays, 0, i);
	}
}

void adjustHeap(std::vector<int>& arrays, int index, int size)
{
	// 记录非叶子节点的值
	int temp = arrays[index];
	// 访问该非叶子节点的左右孩子，index * 2 + 1是左孩子，i * 2 + 1是 i 的左/右孩子，默认是左孩子，如果下面执行了i++就是右孩子
	for (int i = index * 2 + 1; i < size; i = i * 2 + 1)
	{
		// 判断左右孩子谁大，交换更大的值
		if (i + 1 < size && arrays[i] < arrays[i + 1])
		{
			// 使用右孩子，并会更新右孩子的子树
			i++;
		}
		// 如果里面没有结构改变就break，如果发生了改变，让下层的孩子更新值
		if (arrays[i] > temp)
		{
			arrays[index] = arrays[i];
			index = i;
		}
		else
		{
			break;
		}
	}
	// 交换值
	arrays[index] = temp;
}
