#include "StaffList.h"

//Starting screen for users
//Display lines:
//1. Search.
//2. Change staff info.
//3. Remove staff member.
//4. Add a staff member.
//0. Exit.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': changeStaffInfo()
//'3': removeStaff()
//'4': addStaff()
//Otherwise: print "Invalid command", ask for other input.

void StaffList::mainScreen() {
	//readFile(input_text_file, usth_staff_list, stu_list_size);
	//StaffList l("USTH_staff_list.txt");
	for(;;) {
		cout << endl << endl;
		cout << "USTHStaffManager v6.0" << endl;
		cout << "1. Search." << endl;
		cout << "2. Change staff member info." << endl;
	  cout << "3. Remove staff member." << endl;
	  cout << "4. Add a staff member." << endl;
	  cout << "0. Exit." << endl;
	  
	  cout << "What do you want to do, choose one option: ";
	  
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
	  	case 2: mainChangeStaffInfo();
	  					//mainScreen();
	  					break;
	  	case 3: mainRemoveStaff();
	  					//mainScreen();
	  					break;
	  	case 4: mainAddStaff();
	  					//mainScreen(); 					
	  					break;
	  	case 0: exit(0);
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		mainScreen();
	  		
	  }
	}
}
