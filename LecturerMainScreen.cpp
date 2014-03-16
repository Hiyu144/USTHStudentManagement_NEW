#include "LecturerList.h"

//Starting screen for users
//Display lines:
//1. Search.
//2. Change lecturer info.
//3. Remove lecturer.
//4. Add a lecturer.
//0. Exit.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': changeLecturerInfo()
//'3': removeLecturer()
//'4': addLecturer()
//Otherwise: print "Invalid command", ask for other input.

void LecturerList::mainScreen() {
	//readFile(input_text_file, usth_lecturer_list, stu_list_size);
	//LecturerList l("USTH_lecturer_list.txt");
	for(;;) {
		cout << endl << endl;
		cout << "USTHLecturerManager v6.0" << endl;
		cout << "1. Search." << endl;
		cout << "2. Change lecturer info." << endl;
	  cout << "3. Remove lecturer." << endl;
	  cout << "4. Add a lecturer." << endl;
	  cout << "0. Back." << endl;
	  
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
	  	case 2: mainChangeLecturerInfo();
	  					//mainScreen();
	  					break;
	  	case 3: mainRemoveLecturer();
	  					//mainScreen();
	  					break;
	  	case 4: mainAddLecturer();
	  					//mainScreen(); 					
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		mainScreen();
	  		
	  }
	}
}
