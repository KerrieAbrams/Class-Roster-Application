#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {
}

Student::Student(string studentID, string fName, string lName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->fName = fName;
	this->lName = lName;
	this->email = email;
	this->age = age;
	this->daysInCourse1 = daysInCourse1;
	this->daysInCourse2 = daysInCourse2;
	this->daysInCourse3 = daysInCourse3;
	this->degreeProgram = degreeProgram;
}

void Student::setStudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFName(string fName) {
	this->fName = fName;
}

void Student::setLName(string lName) {
	this->lName = lName;
}

void Student::setEmail(string email) {
	this->email = email;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInCourse1(int daysInCourse1) {
	this->daysInCourse1 = daysInCourse1;
}

void Student::setDaysInCourse2(int daysInCourse2) {
	this->daysInCourse2 = daysInCourse2;
}

void Student::setDaysInCourse3(int daysInCourse3) {
	this->daysInCourse3 = daysInCourse3;
}

void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

string Student::getStudentID() {
	return studentID;
}

string Student::getFName() {
	return fName;
}

string Student::getLName() {
	return lName;
}

string Student::getEmail() {
	return email;
}

int Student::getAge() {
	return age;
}

int Student::getDaysInCourse1() {
	return daysInCourse1;
}

int Student::getDaysInCourse2() {
	return daysInCourse2;
}

int Student::getDaysInCourse3() {
	return daysInCourse3;
}

DegreeProgram Student::getDegreeProgram() {
	return degreeProgram;
}

void Student::print() {
	string degreeString;
	if (degreeProgram == DegreeProgram::SOFTWARE) {
		degreeString = "SOFTWARE";
	}

	if (degreeProgram == DegreeProgram::SECURITY) {
		degreeString = "SECURITY";
	}

	if (degreeProgram == DegreeProgram::NETWORK) {
		degreeString = "NETWORK";
	}
	cout << studentID << "\t" << "First Name: " << fName << "\t" << "Last Name: " << lName << "\t" << "Age: " << age << "\t" << "daysInCourse: {" << daysInCourse1 << ", " << daysInCourse2 << ", " << daysInCourse3 << "} Degree Program" << degreeString << endl;
}
