#include "Student.h"
#include "Degree.h"
#include <iostream>

using namespace std;

Student::Student() {
	this->studentID = "";
	this->fName = "";
	this->lName = "";
	this->email = "";
	this->age = 0;
	courseDays[0] = 0;
	courseDays[1] = 0;
	courseDays[2] = 0;
	this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string fName, string lName, string email, int age, int courseDays[], DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->fName = fName;
	this->lName = lName;
	this->email = email;
	this->age = age;
	this->courseDays[0] = courseDays[0];
	this->courseDays[1] = courseDays[1];
	this->courseDays[2] = courseDays[2];
	this->degreeProgram = degreeProgram;
}

Student::~Student() {

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

void Student::setCourseDays(int courseDays[]) {
	this->courseDays[0] = courseDays[0];
	this->courseDays[1] = courseDays[1];
	this->courseDays[2] = courseDays[2];
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

int* Student::getCourseDays() {
	return courseDays;
}

DegreeProgram Student::getDegreeProgram() {
	return degreeProgram;
}

void Student::print() {
	string degreeString;
	degreeString = degreeProgramStrings[int(getDegreeProgram())];
	cout << getStudentID() << "\t";
	cout << "First Name: " << getFName() << "\t";
	cout << "Last Name: " << getLName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "daysInCourse: {" << getCourseDays()[0] << ", " << getCourseDays()[1] << ", " << getCourseDays()[2] << "} ";
	cout << "Degree Program: " << degreeString << endl;
}
