#include <string>
#include "Student.h"

class Roster {
	int indexPointer = -1;
	Student* classRosterArray[5];
public:
	Roster();
	Roster(Student* classRosterArray[5]);
	~Roster();
	void parse(string data);
	void add(string studentID, string fName, string lName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
};

 