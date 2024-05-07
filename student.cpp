#pragma once
#include <iostream>
#include "student.h"
using namespace std;

// SETTING CONSTRUCTORS
Student::Student()
{
	this->studentId = 0;
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; i++) this->days[i] = "";
	this->degreeProgram = DegreeProgram::UNDECIDED;
};