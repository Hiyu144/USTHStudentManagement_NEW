#include "LecturerList.h"

//Search screen for user
//Display lines:
//1. Search by name
//2. Search by dOB
//3. Search by address
//4. Search by field
//5. Search by title
//6. Search by experience year
//0. Back
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': searchByName()
//'2': searchByDOB()
//'3': searchByAddress()
//'4': searchByField()
//'5': searchByTitle()
//'6': searchByExpYears()
//'0': return;
//Otherwise: show error, ask for other input.
void LecturerList::mainSearch() {
	for(;;) {
		cout << endl << endl;
		cout << "Search a Lecturer: " << endl;
		cout << "1. Search by name." << endl;
		cout << "2. Search by dOB." << endl;
	  cout << "3. Search by address." << endl;
	  cout << "4. Search by field of study." << endl;
	  cout << "5. Search by title." << endl;
	  cout << "6. Search by experience years." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "What do you want to do, choose one option: ";
	  
	  // Verify a command if it is integer and belong to {0..6}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 7) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: searchByName();
	  					break;
	  					//mainScreen();
	  	case 2: searchByDOB();
	  					//mainScreen();
	  					break;
	  	case 3: searchByAddress();
	  					//mainScreen();
	  					break;
	  	case 4: searchByField();
	  					//mainScreen();
	  					break;
	  	case 5: searchByTitle();
	  					//mainScreen();
	  					break;
	  	case 6: searchByExpYears();
	  					//mainScreen(); 					
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//Sub functions
//Ask user for searching material (string/int)
//Ask for re-enter if the input is invalid
//Display all Lecturers who has the same info
void LecturerList::searchByName() {
	cout << "Enter a name to search: ";
	cin.ignore();
	string search_name;
	getline(cin, search_name);
	cout << endl;
	lecturer_pos i;
		for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		string temp_string = i->Get_name();
		size_t found = temp_string.find(search_name);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void LecturerList::searchByDOB() {
	cout << "Enter DoB to search: ";
	cin.ignore();
	string search_DoB;
	getline(cin, search_DoB);
	cout << endl;
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		string temp_DoB = i->Get_dOB();
		size_t found = temp_DoB.find(search_DoB);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void LecturerList::searchByAddress() {
	cout << "Enter address to search: ";
	cin.ignore();
	string search_address;
	getline(cin, search_address);
	cout << endl;
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		string temp_address = i->Get_address();
		size_t found = temp_address.find(search_address);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void LecturerList::searchByExpYears() {
	cout << "Enter experience years to search: ";
	cin.ignore();
	int years;
	cin >> years;
	cout << endl;
	string search_years;
	ostringstream convert1;
	convert1 << years;
	search_years = convert1.str();
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		int temp  = i->Get_years();
		string temp_years;
		ostringstream convert2;
		convert2 << temp_years;
		temp_years = convert2.str();
	
		size_t found = temp_years.find(search_years);
		if (found != std::string::npos){
			i->Print();
			cout << endl;
		}
	}
}

void LecturerList::searchByField() {
	cout << "Enter field of study to search: ";
	cin.ignore();
	string search_field;
	getline(cin, search_field);
	cout << endl;
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		string temp_field = i->Get_field();
		size_t found = temp_field.find(search_field);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void LecturerList::searchByTitle() {
	cout << "Enter title to search: ";
	cin.ignore();
	string search_title;
	getline(cin, search_title);
	cout << endl;
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		string temp_title = i->Get_title();
		size_t found = temp_title.find(search_title);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}



