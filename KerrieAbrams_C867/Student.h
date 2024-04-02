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
	int courseDays[3];
	DegreeProgram degreeProgram;
public:
	Student();
	Student(string studentID, string fName, string lName, string email, int age, int courseDays[], DegreeProgram degreeProgram);
	~Student();

	string getStudentID();
	string getFName();
	string getLName();
	string getEmail();
	int getAge();
	int* getCourseDays();
	DegreeProgram getDegreeProgram();

	void setStudentID(string studentID);
	void setFName(string fName);
	void setLName(string lName);
	void setEmail(string email);
	void setAge(int age);
	void setCourseDays(int prices[]);
	void setDegreeProgram(DegreeProgram degreeProgram);
	void print();
};
