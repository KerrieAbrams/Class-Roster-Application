#include "Roster.h"
#include "Student.h"
using namespace std;

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	Student student;
	int courseDays[3];
	student.setStudentID(studentID);
	student.setFName(firstName);
	student.setLName(lastName);
	student.setEmail(emailAddress);
	student.setAge(age);

	courseDays[0] = daysInCourse1;
	courseDays[1] = daysInCourse2;
	courseDays[2] = daysInCourse3;

	student.setCourseDays(courseDays);
	student.setDegreeProgram(degreeProgram);
	this->student = student;
}