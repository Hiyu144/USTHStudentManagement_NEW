#include "StaffList.h"

//"Add Staff" main screen for users
//Display lines:
//1. Search.
//2. Enter staff member info.
//0. Back.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': createStaff()
//'0': return;
//Otherwise: print "Invalid command", ask for other input.
void StaffList::mainAddStaff() {
	for (;;) {	
		cout << endl << endl;
		cout << "Add a staff member: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Enter staff member info." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "What do you want to do, choose one option: ";
	  
	  // Verify a command if it is integer and belong to {0..3}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 4) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: mainSearch();
	  					break;
	  					//mainAddStaff();
	  	case 2: createStaff();
	  					break;
	  					//mainAddStaff();
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }
	}
}

//Let the user input all required info of the new Staff
//re-enter if the info is invalid
//After all the info has been filled, display options:
//1. Add Staff //call addStaff() 
//2. Re enter info //mainAddStaff() 
//0. return;
void StaffList::createStaff() {
	string new_name, new_dob, new_address, new_dept, new_pos;
	int new_sal_rate;
	cout << "Name: ";
	cin.ignore();
	getline(cin, new_name);
	cout << "DOB: ";
	//cin.ignore();
	getline(cin, new_dob);
	cout << "Address: ";
	//cin.ignore();
	getline(cin, new_address);	
	cout << "Department: ";
	cin.ignore();
	getline(cin, new_dept);
	cout << "Position: ";
	//cin.ignore();
	getline(cin, new_pos);
	cout << "Salary rate: ";
	while (!(cin >> new_sal_rate)||new_sal_rate<0) {
		cout << "Invalid number!" << endl;
		cin.clear();
		cin.ignore(256,'\n');
	}	
	int new_id = newID();	
	Staff newbie( new_id, 
									new_name, 
									new_dob, 
									new_address, 
									new_dept,
									new_pos, 
									new_sal_rate);
	cout << "Choose one: " << endl;
	cout << "1. Add a staff member" << endl;
	cout << "0. Back" << endl;
	cout << "Enter Your option: ";
	int command;
	while (true) {
			cin >> command;
			if (cin && (command < 4) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
	switch (command) {
	  	case 1: if (userConfirm()) {
	  						addStaff(newbie);
								cout << "Add success! New staff member info: " << endl;
								newbie.Print();
								cout << endl;
	  					} else {
	  						cout << "No change is commited";
	  					}	  					
	  					break;	  						  
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }
}
//	
//}

//Add Staff newbie into the end of  usth_Staff_list[], size++
//write to the output text file
void StaffList::addStaff(Staff newbie) {		
	//l[size] = newbie;
	int lastStaffID = stf_list.back().Get_id();
	int newID = lastStaffID + 1;
	newbie.Set_id(newID);
	stf_list.push_back(newbie);
	//l[size].Set_id(newId);
	//size++;				
	writeFile(output_text_file);
}
