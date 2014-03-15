#include "StaffList.h"

//"Remove staff" main screen for users
//Display lines:
//1. Search.
//2. Remove staff by Id.
//0. Back.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': removeStaff()
//'0': return;
//Otherwise: print "Invalid command", ask for other input.
void StaffList::mainRemoveStaff() {
	for(;;) {
		cout << endl << endl;
		cout << "Remove a staff member: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Remove staff member by ID." << endl;		
	  cout << "0. Back." << endl;
	  
	  cout << "What do you want to do, choose one option: ";
	  
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
	  	case 2: removeStaff();
	  					//mainScreen();
	  					break;	  	
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//Ask user for the staff id
//If the id is invalid, print "Invalid Id", ask for other input.
//If the id = -1, return
//search the staff in usth_staff_list[] that match the id
//remove that staff, reduce size by 1 
//call writeFile() to update info in output_text_file
void StaffList::removeStaff() {
	int id;
	cout << "Enter staff member's ID: ";
	while (!(cin >> id)||id<0) {
		cout << "Invalid Id!" << endl;
		cin.clear();
		cin.ignore(256,'\n');
	}	
	if (isValidID(id)) {				
		staff_pos i = posOfID(id);
		i->Print();
		cout << endl;
		if (userConfirm()) {					
			stf_list.erase(i);
	 		writeFile(output_text_file);
	 		cout << "Remove success!" << endl;
	 	} else {
	 		cout << "No change is committed";
	 	}
	} else cout << "There is no staff member with the id: " << id << endl;		
}
