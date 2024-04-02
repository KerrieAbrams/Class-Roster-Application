#include "Roster.h"
#include "Student.h"
#include <iostream>
using namespace std;

Roster::Roster() {
	classRosterArray[5] = new Student[5];
}

Roster::Roster(Student* classRosterArray[5]) {
	this->classRosterArray[5] = classRosterArray[5];
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
	cout << "Displaying all students:" << endl;
	for (int i = 0; i < 5; i++) {
		classRosterArray[i]->print();
	}
}

