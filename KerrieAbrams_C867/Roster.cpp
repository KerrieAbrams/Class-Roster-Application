#include "Roster.h"
#include "Student.h"
#include "Degree.h"
#include <cstring>
#include <iostream>
using namespace std;

/*Roster::Roster() {
	classRosterArray[5] = new Student[5];
}

Roster::Roster(Student* classRosterArray[5]) {
	this->classRosterArray[5] = classRosterArray[5];
}*/

Roster::~Roster() {
	this->indexPointer = -1;
	for (int i = 0; i < 5; i++) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}

}

void Roster::parse(string data) {
	size_t rhs = data.find(",");
	string studentID = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string fName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string lName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string email = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int age = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int daysInCourse1 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int daysInCourse2 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int daysInCourse3 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string degreeString = data.substr(lhs, rhs - lhs);

	DegreeProgram degreeProgram;
	if (degreeString == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}

	if (degreeString == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}

	if (degreeString == "NETWORK") {
		degreeProgram = DegreeProgram::NETWORK;
	}

	add(studentID, fName, lName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}
void Roster::add(string studentID, string fName, string lName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	int courseDays[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[++indexPointer] = new Student(studentID, fName, lName, email, age, courseDays, degreeProgram);
}

void Roster::printAll() {
	
	for (int i = 0; i <= Roster::indexPointer; i++) {
		classRosterArray[i]->print();
	}
}
void Roster::printInvalidEmails() {
	cout << "Displaying invalid emails:" << endl;
	for (int i = 0; i <= Roster::indexPointer; i++) {
		string email = classRosterArray[i]->getEmail();
		char emailcstr[30];
		strcpy_s(emailcstr, email.c_str());
		if (strchr(emailcstr, ' ') != NULL || strchr(emailcstr, '@') == NULL || strchr(emailcstr, '.') == NULL) {
			cout << email << " - is invalid" << endl;
		}
	}
}
void Roster::remove(string studentID) {
	cout << "Removing " << studentID << ":" << endl;
	bool exists = false;

	for (int i = 0; i <= Roster::indexPointer; i++) {
		string sID = classRosterArray[i]->getStudentID();
		int result = sID.compare(studentID);
		if (result == 0) {
			
			exists = true;
			if (i == 4) {
				delete classRosterArray[i];
				classRosterArray[i] = nullptr;
			}
			else {
				Student* temp = classRosterArray[4];
				classRosterArray[4] = classRosterArray[i];
				classRosterArray[i] = temp;
				delete classRosterArray[4];
				classRosterArray[4] = nullptr;
			}
			Roster::indexPointer--;
		}

	}

	if (exists == false) {
		cout << "The student with the ID: " << studentID << " was not found." << endl;
	}
	

	if (exists == true) {
		printAll();
	}

}