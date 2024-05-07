#pragma once
#include <iostream>
using namespace std;

class Student {
	public:
		const static int daysArraySize = 4;
	public:
		void setfirstName(string x)
		{
			firstname = x;
		};
		string getfirstName()
		{
			return firstname;
		}
	private: 
		int studentId;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int days[daysArraySize];
		string degreeProgram;
};