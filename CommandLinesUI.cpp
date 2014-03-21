//Command lines user interface
#include<iostream>
#include "StudentList.h"
#include "StaffList.h"
#include "LecturerList.h"
using namespace std;
string student_savefile = "Student_list.txt";
string lecturer_savefile = "Lecturer_list.txt";
string staff_savefile = "Staff_list.txt";
//string subject_savefile = "Subject_list.txt";
//string timetable_savefile = "Timetable.txt";
int main() {
	cout << "Welcome Prof.X" << endl;
	StudentList stulist(student_savefile);
	LecturerList leclist(lecturer_savefile);
	StaffList stflist(staff_savefile);
	//SubjectList sujlist(subject_savefile);
	//Timetable timetable(timetable_savefile);
	for (;;) {
		cout << endl << endl;
		cout << "USTH Manager ver 8.0" << endl;
		cout << "1. Student management." << endl;
		cout << "2. Lecturer management." << endl;
		cout << "3. Staff management." << endl;
		cout << "4. Subject management." << endl;
		cout << "5. Bachelor Timetable." << endl;
		cout << "0. Exit." << endl;
		cout << "Enter a number: ";
		// Verify a command if it is integer and belong to {0..5}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 6) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {	  	
	  	case 1: stulist.mainScreen();
	  					break;	  					
	  	case 2: leclist.mainScreen();	  					
	  					break;
	  	case 3: stflist.mainScreen();	  					
	  					break;
	  	case 4: //sujlist.mainScreen();	  					
	  			cout << "COMING SOON!" << endl;
	  					break;
		case 5: //timetable.mainScreen();
				cout << "COMING SOON!" << endl;
							break;	  					
	  	case 0: exit(0);
	  	default: 
	  		cout << "Invalid command!" << endl;	  			  		
	  }
	}
	return 0;
}
