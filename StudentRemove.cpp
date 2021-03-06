#include "StudentList.h"

//"Remove student" main screen for users
//Display lines:
//1. Search.
//2. Remove student by Id.
//0. Back.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': removeStudent()
//'0': return;
//Otherwise: print "Invalid command", ask for other input.
void StudentList::mainRemoveStudent() {
	for(;;) {
		cout << endl << endl;
		cout << "Remove a student: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Remove student by ID." << endl;		
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
	  // Verify a command if it is integer and belong to {0..2}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 3) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: mainSearch();
	  					break;
	  					//mainScreen();
	  	case 2: removeStudent();
	  					//mainScreen();
	  					break;	  	
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//Ask user for the student id
//If the id is invalid, print "Invalid Id", ask for other input.
//If the id = -1, return
//search the student in usth_student_list[] that match the id
//remove that student, reduce size by 1 
//call writeFile() to update info in output_text_file
void StudentList::removeStudent() {
	int id;
	cout << "Enter student ID: ";
	while (!(cin >> id)||id<0) {
		cout << "Invalid Id!" << endl;
		cin.clear();
		cin.ignore(256,'\n');
	}	
	if (isValidID(id)) {				
		student_pos i = posOfID(id);
		i->Print();
		cout << endl;
		if (userConfirm()) {					
			stu_list.erase(i);
	 		writeFile(output_text_file);
	 		cout << "Remove success!" << endl;
	 	} else {
	 		cout << "No change is committed";
	 	}
	} else cout << "There is no student with the id: " << id << endl;		
}
