#include <string>
#include "Degree.h"
using namespace std;

class Student {
private:
	string studentID;
	string fName;
	string lName;
	string email;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	DegreeProgram degreeProgram;
public:
	Student();
	Student(string studentID, string fName, string lName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	string getStudentID();
	string getFName();
	string getLName();
	string getEmail();
	int getAge();
	int getDaysInCourse1();
	int getDaysInCourse2();
	int getDaysInCourse3();
	DegreeProgram getDegreeProgram();
	void setStudentID(string studentID);
	void setFName(string fName);
	void setLName(string lName);
	void setEmail(string email);
	void setAge(int age);
	void setDaysInCourse1(int daysInCourse1);
	void setDaysInCourse2(int daysInCourse2);
	void setDaysInCourse3(int daysInCourse3);
	void setDegreeProgram(DegreeProgram degreeProgram);
	~Student();
	void print();
};
