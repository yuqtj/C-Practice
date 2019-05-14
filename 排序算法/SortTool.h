#pragma once

#include <vector>

/*
	排序算法
*/

// 一般的冒泡排序最差、平均时间复杂读为 O(n^2)，稳定
// 冒泡优化版
void bubbleSort(std::vector<int>& arrays, int size);

// 快排最差时间为 O(n^2)，平均时间复杂为 O(n * log2 N)，不稳定
// 快排
void quickSort(std::vector<int>& arrays, int low, int high);


// 堆排序最差和平均都是 O(n * log2 N)，不稳定
// 堆排序
void headSort(std::vector<int>& arrays, int size);
// 调整
void adjustHeap(std::vector<int>& arrays, int index, int size);
