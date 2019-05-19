#pragma once

#include <set>


struct SetOpNum 
{
	int studentID;
	int classID;
	const char* name;

	SetOpNum(int studentID, int classID, const char* name)
	{
		this->studentID = studentID;
		this->classID = classID;
		this->name = name;
	}

	bool operator<(const SetOpNum& other) const
	{
		// ȥ��
		if (this->studentID == other.studentID)
		{
			return false;
		}
		else
		{
			// ����
			return this->studentID > other.studentID;
		}
	}
};

void displaySet(std::set<int>& mySet);
void displaySet(std::set<SetOpNum>& mySet);

void setTest();


