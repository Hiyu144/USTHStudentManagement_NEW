#include "StudentList.h"

//Starting screen for users
//Display lines:
//1. Search.
//2. Change student info.
//3. Remove student.
//4. Add a student.
//0. Exit.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': changeStudentInfo()
//'3': removeStudent()
//'4': addStudent()
//Otherwise: print "Invalid command", ask for other input.

void mainScreen() {
	readFile(input_text_file, usth_student_list, stu_list_size);
	
	for(;;) {
		cout << endl << endl;
		cout << "USTHStudentManager v5.1" << endl;
		cout << "1. Search." << endl;
		cout << "2. Change student info." << endl;
	  cout << "3. Remove student." << endl;
	  cout << "4. Add a student." << endl;
	  cout << "0. Exit." << endl;
	  
	  cout << "Enter a number: ";
	  
	  // Verify a command if it is integer and belong to {0..4}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 5) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: mainSearch();
	  					break;
	  					//mainScreen();
	  	case 2: mainChangeStudentInfo();
	  					//mainScreen();
	  					break;
	  	case 3: mainRemoveStudent();
	  					//mainScreen();
	  					break;
	  	case 4: mainAddStudent();
	  					//mainScreen(); 					
	  					break;
	  	case 0: exit(0);
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		mainScreen();
	  		
	  }
	}
}
