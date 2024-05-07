#pragma once
#include <iostream>
#include "student.h"
using namespace std;

// SETTING CONSTRUCTORS + DECONSTRUCTORS
Student::Student()
{
	this->studentId = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; i++) this->days[i] = 0;
	this->degreeProgram = DegreeProgram::UNDECIDED;
};

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int days[], DegreeProgram degreeProgram)
{
	this->studentId = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < daysArraySize; i++) this->days[i] = days[i];
	this->degreeProgram = degreeProgram;
};

Student::~Student() {};

/* SETTING ACCESSORS AND MUTATORS */
string Student::getstudentID() { return this->studentId; }
string Student::getfirstName() { return this->firstName; }
string Student::getlastName() { return this->lastName; }
int Student::getAge() { return this->age; }
int* Student::getdays() { return this->days; };
DegreeProgram Student::getDegreeProgram(){ return this->degreeProgram; }

void Student::setstudentId(string ID) { this->studentId = ID; }
void Student::setfirstName(string firstname) { this->firstName = firstname; }
void Student::setlastName(string lastname) { this->lastName = lastname; }
void Student::setemailAddress(string emailaddress) { this->emailAddress = emailaddress; }
void Student::setAge(int age) { this->age = age; }
void Student::setDays(int days[])
{
	for (int i = 0; i < daysArraySize; i++) { this->days[i] = days[i]; }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }
