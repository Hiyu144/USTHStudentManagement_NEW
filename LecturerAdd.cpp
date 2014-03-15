#include "LecturerList.h"

//"Add Lecturer" main screen for users
//Display lines:
//1. Search.
//2. Enter Lecturer info.
//0. Back.
//Enter a number:
////////////////////
//When user input, do the respective functions:
//'1': mainSearch()
//'2': createLecturer()
//'0': return;
//Otherwise: print "Invalid command", ask for other input.
void LecturerList::mainAddLecturer() {
	for (;;) {	
		cout << endl << endl;
		cout << "Add a Lecturer: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Enter Lecturer info." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
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
	  					//mainAddLecturer();
	  	case 2: createLecturer();
	  					break;
	  					//mainAddLecturer();
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }
	}
}

//Let the user input all required info of the new Lecturer
//re-enter if the info is invalid
//After all the info has been filled, display options:
//1. Add Lecturer //call addLecturer() 
//2. Re enter info //mainAddLecturer() 
//0. return;
void LecturerList::createLecturer() {
	string new_name, new_dob, new_address, new_title, new_field;
	int new_years;
	cout << "Name: " << endl;
	cin.ignore();
	getline(cin, new_name);
	cout << "DOB: " << endl;
	//cin.ignore();
	getline(cin, new_dob);
	cout << "Address: " << endl;
	//cin.ignore();
	getline(cin, new_address);	
	cout << "Field of study: " << endl;
	cin.ignore();
	getline(cin, new_field);
	cout << "Title: " << endl;
	//cin.ignore();
	getline(cin, new_title);
	cout << "Enter year: " << endl;
	while (!(cin >> new_years)||new_years<0) {
		cout << "Invalid number!" << endl;
		cin.clear();
		cin.ignore(256,'\n');
	}	
	int new_id = newID();	
	Lecturer newbie( new_id, 
									new_name, 
									new_dob, 
									new_address, 
									new_field,
									new_title, 
									new_years);
	cout << "Choose one: " << endl;
	cout << "1. Add Lecturer" << endl;
	cout << "0. Back" << endl;
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
	  						addLecturer(newbie);
								cout << "Add success! New lecturer info: " << endl;
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

//Add Lecturer newbie into the end of  usth_Lecturer_list[], size++
//write to the output text file
void LecturerList::addLecturer(Lecturer newbie) {		
	//l[size] = newbie;
	int lastLecturerID = lec_list.back().Get_id();
	int newID = lastLecturerID + 1;
	newbie.Set_id(newID);
	lec_list.push_back(newbie);
	//l[size].Set_id(newId);
	//size++;				
	writeFile(output_text_file);
}
