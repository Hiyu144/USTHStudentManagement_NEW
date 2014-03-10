#include "StudentList.h"

//Search screen for user
//Display lines:
//1. Search by name
//2. Search by dOB
//3. Search by address
//4. Search by entry year
//5. Search by class name
//6. Search by major
//0. Back
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': searchByName()
//'2': searchByDOB()
//'3': searchByAddress()
//'4': searchByEnterYear()
//'5': searchByClassName()
//'6': searchByMajor()
//'0': return;
//Otherwise: show error, ask for other input.
void mainSearch() {
	for(;;) {
		cout << endl << endl;
		cout << "Search a student: " << endl;
		cout << "1. Search by name." << endl;
		cout << "2. Search by dOB." << endl;
	  cout << "3. Search by address." << endl;
	  cout << "4. Search by entry year." << endl;
	  cout << "5. Search by class name." << endl;
	  cout << "6. Search by major." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
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
	  	case 4: searchByEnterYear();
	  					//mainScreen(); 					
	  					break;
	  	case 5: searchByClassName();
	  					break;
	  	case 6: searchByMajor();
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
//Display all students who has the same info
void searchByName() {
	cout << "Enter a name to search: ";
	cin.ignore();
	string search_name;
	getline(cin, search_name);
	cout << endl;
	for (int i = 0; i < stu_list_size; ++i) {
		string temp_string = usth_student_list[i].Get_name();
		size_t found = temp_string.find(search_name);
		if (found != std::string::npos) {
			usth_student_list[i].Print();
			cout << endl;
		}
	}
}

void searchByDOB() {
	cout << "Enter DoB to search: ";
	cin.ignore();
	string search_DoB;
	getline(cin, search_DoB);
	cout << endl;
	for (int i = 0; i < stu_list_size; ++i) {
		string temp_DoB = usth_student_list[i].Get_dOB();
		size_t found = temp_DoB.find(search_DoB);
		if (found != std::string::npos) {
			usth_student_list[i].Print();
			cout << endl;
		}
	}
}

void searchByAddress() {
	cout << "Enter address to search: ";
	cin.ignore();
	string search_address;
	getline(cin, search_address);
	cout << endl;
	for (int i = 0; i < stu_list_size; ++i) {
		string temp_address = usth_student_list[i].Get_address();
		size_t found = temp_address.find(search_address);
		if (found != std::string::npos) {
			usth_student_list[i].Print();
			cout << endl;
		}
	}
}

void searchByEnterYear() {
	cout << "Enter year to search: ";
	cin.ignore();
	int year;
	cin >> year;
	cout << endl;
	string search_year;
	ostringstream convert1;
	convert1 << year;
	search_year = convert1.str();
	for (int i = 0; i < stu_list_size; ++i){
		int temp  = usth_student_list[i].Get_enter_year();
		string temp_year;
		ostringstream convert2;
		convert2 << temp;
		temp_year = convert2.str();
	
		size_t found = temp_year.find(search_year);
		if (found != std::string::npos){
			usth_student_list[i].Print();
			cout << endl;
		}
	}
}

void searchByClassName() {
	cout << "Enter class to search: ";
	cin.ignore();
	string search_class;
	getline(cin, search_class);
	cout << endl;
	for (int i = 0; i < stu_list_size; ++i) {
		string temp_class = usth_student_list[i].Get_class_name();
		size_t found = temp_class.find(search_class);
		if (found != std::string::npos) {
			usth_student_list[i].Print();
			cout << endl;
		}
	}
}

void searchByMajor() {
	cout << "Enter major to search: ";
	cin.ignore();
	string search_major;
	getline(cin, search_major);
	cout << endl;
	for (int i = 0; i < stu_list_size; ++i) {
		string temp_major = usth_student_list[i].Get_major();
		size_t found = temp_major.find(search_major);
		if (found != std::string::npos) {
			usth_student_list[i].Print();
			cout << endl;
		}
	}
}



