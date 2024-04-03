#include <iostream>
#include "Student.h"
#include "Roster.h"

using namespace std;

int main() {

	//Heading
	cout << "C867-Scripting and Programming: Applications" << endl << "Language: C++" << endl << "Student ID: 010894830" << endl << "Name: Kerrie Abrams" << endl << endl;

	//Student Data
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Kerrie,Abrams,kabra70@wgu.edu,27,14,21,7,SOFTWARE"
	};

	
	Roster classRoster;

	for (int i = 0; i < 5; i++) {
		classRoster.parse(studentData[i]);
	}
	cout << "Displaying all students:" << endl;
	classRoster.printAll();

	cout << endl;

	classRoster.printInvalidEmails();

	cout << endl;

	classRoster.remove("A3");

	cout << endl;

	classRoster.remove("A3");

	classRoster.~Roster();
}

