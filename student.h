#pragma once
#include <iostream>
#include "degree.h"
using namespace std;

class Student {

	/* SETTING ARRAY SIZE - MUST BE CONSTANT, C++ CANNOT DYNAMICALLY ASSIGN MEMEORY TO ARRAYS */
public:
	const static int daysArraySize = 4;

	/* OBJECT SHAPE */
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int days[daysArraySize];
	DegreeProgram degreeProgram;

	/* CONSTRUCTORS AND DECONSTRUCTORS */
public:
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int days[], DegreeProgram degreeProgram);
	~Student();

	/* ACCESORS AND MUTATORS */
public:
	// ACCESSORS
	string getstudentID();
	string getfirstName();
	string getlastName();
	string getemailAddress();
	int getAge();
	int* getdays();
	DegreeProgram getDegreeProgram();

	//MUTATORS
	void setstudentId(string ID);
	void setfirstName(string firstname);
	void setlastName(string lastname);
	void setemailAddress(string emailAddress);
	void setAge(int age);
	void setDays(int days[]);
	void setDegreeProgram(DegreeProgram degreeProgram);

	static void printHeader();

	void print();

};