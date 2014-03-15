#include "StaffList.h"

//Search screen for user
//Display lines:
//1. Search by name
//2. Search by dOB
//3. Search by address
//4. Search by department
//5. Search by position
//6. Search by salary rate
//0. Back
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': searchByName()
//'2': searchByDOB()
//'3': searchByAddress()
//'4': searchByDept()
//'5': searchByPos()
//'6': searchBySalRate()
//'0': return;
//Otherwise: show error, ask for other input.
void StaffList::mainSearch() {
	for(;;) {
		cout << endl << endl;
		cout << "Search a staff member: " << endl;
		cout << "1. Search by name." << endl;
		cout << "2. Search by dOB." << endl;
	  cout << "3. Search by address." << endl;
	  cout << "4. Search by department." << endl;
	  cout << "5. Search by position." << endl;
	  cout << "6. Search by salary rate." << endl;
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
	  	case 4: searchByDept();
	  					//mainScreen();
	  					break;
	  	case 5: searchByPos();
	  					//mainScreen();
	  					break;
	  	case 6: searchBySalRate();
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
//Display all Staffs who has the same info
void StaffList::searchByName() {
	cout << "Enter a name to search: ";
	cin.ignore();
	string search_name;
	getline(cin, search_name);
	cout << endl;
	staff_pos i;
		for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		string temp_string = i->Get_name();
		size_t found = temp_string.find(search_name);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void StaffList::searchByDOB() {
	cout << "Enter DoB to search: ";
	cin.ignore();
	string search_DoB;
	getline(cin, search_DoB);
	cout << endl;
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		string temp_DoB = i->Get_dOB();
		size_t found = temp_DoB.find(search_DoB);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void StaffList::searchByAddress() {
	cout << "Enter address to search: ";
	cin.ignore();
	string search_address;
	getline(cin, search_address);
	cout << endl;
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		string temp_address = i->Get_address();
		size_t found = temp_address.find(search_address);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void StaffList::searchBySalRate() {
	cout << "Enter salary rate to search: ";
	cin.ignore();
	int sal_rate;
	cin >> sal_rate;
	cout << endl;
	string search_sal_rate;
	ostringstream convert1;
	convert1 << sal_rate;
	search_sal_rate = convert1.str();
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		int temp  = i->Get_sal_rate();
		string temp_sal_rate;
		ostringstream convert2;
		convert2 << temp_sal_rate;
		temp_sal_rate = convert2.str();
	
		size_t found = temp_sal_rate.find(search_sal_rate);
		if (found != std::string::npos){
			i->Print();
			cout << endl;
		}
	}
}

void StaffList::searchByDept() {
	cout << "Enter department to search: ";
	cin.ignore();
	string search_dept;
	getline(cin, search_dept);
	cout << endl;
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		string temp_dept = i->Get_dept();
		size_t found = temp_dept.find(search_dept);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}

void StaffList::searchByPos() {
	cout << "Enter position to search: ";
	cin.ignore();
	string search_pos;
	getline(cin, search_pos);
	cout << endl;
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		string temp_pos = i->Get_pos();
		size_t found = temp_pos.find(search_pos);
		if (found != std::string::npos) {
			i->Print();
			cout << endl;
		}
	}
}



