#include "StaffList.h"

//"Info change" screen for user
//Display lines:
//1. Search.
//2. Enter staff ID.
//0. Back.
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': mainSearch()
//'2': Display lines: 
//		Enter staff Id:
// 		//If the enter Id is invalid, ask for re-enter.
//		//If the enter Id = -1: return;
//		//Else call changeStaffInfo();
//'0': return;
//Otherwise: show error, ask for other input.
void StaffList::mainChangeStaffInfo() {
	for (;;) {
		cout << endl << endl;
		cout << "Change a staff member info: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Enter staff member's ID'." << endl;	  
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
	  // Verify a command if it is integer and belong to {0..3}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command < 3) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
		int id;
	  switch (command) {
	  	case 1: mainSearch();
	  					break;
	  					//mainScreen();
	  	case 2: cout << "Enter staff member's' ID: ";
	  				while (!(cin >> id)||id<0) {
							cout << "Invalid Id!" << endl;
							cin.clear();
							cin.ignore(256,'\n');
						}
	  					if (isValidID(id)) changeStaffInfo(id);	  
							else cout << "There is no staff member with the id: " << id << endl;					
	  					//mainScreen();
	  					break;
	  	
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}
}

//Display the user being change's info
//Display lines:
//1. change name.
//2. change dOB.
//3. change address.
//4. change department.
//5. change position.
//6. change salary rate.
//0. Back
//Enter command:
/////////////////////
//When user input, call the respective functions:
//changeName()
//changeDOB()
//changeAddress()
//changeSalRate()
//changeDept()
//changePos()
void StaffList::changeStaffInfo(int id) {
	for(;;) {
		cout << "Staff Info: " << endl;
		staff_pos i = posOfID(id);
		i->Print();
		cout << endl;		
		cout << "Choose one type of change: " << endl;
		cout << "1. Change name." << endl;
		cout << "2. Change dOB." << endl;
	  cout << "3. Change address." << endl;
	  cout << "4. Change department." << endl;
	  cout << "5. Change position." << endl;
	  cout << "6. Change salary rate." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "What do you want to change, choose one option: ";
	  
	  // Verify a command if it is integer and belong to {0..4}
	  int command;  
		while (true) {
			cin >> command;
			if (cin && (command <=6) && (command > -1)) break;
			cout << "Invalid command!" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		} 
		//////////////////////////////////////////////////////////
		
	  switch (command) {
	  	case 1: changeName(id);
	  					break;
	  					//mainScreen();
	  	case 2: changeDOB(id);
	  					//mainScreen();
	  					break;
	  	case 3: changeAddress(id);
	  					//mainScreen();
	  					break;
	  	case 4: changeDept(id);
	  					break;
	  	case 5: changePos(id);
	  					break;
	  	case 6: changeSalRate(id);
	  					//mainScreen(); 					
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}//
}

//With each function, display the current staff info, 
//ask for new info, ask for re-enter if the info is invalid
//update staff info in usth_staff_list[]
//call writeFile() to update the new info in output_text_file
void StaffList::changeName(int id) {
	cout << "Staff Name: ";
	staff_pos i = posOfID(id);
	cout << i->Get_name() << endl;	
	string new_name;
	cin.ignore();
	cout << "Enter new name: ";
	getline(cin, new_name);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_name(new_name);
		writeFile(output_text_file);
 		cout << "Name update success!" << endl;
	}
	else {
		cout << "No change is commited" << endl;
	}
	
}

void StaffList::changeDOB(int id) {
	cout << "Date of Birth: ";
	staff_pos i = posOfID(id);
	cout << i->Get_dOB() << endl;	
	string new_dOB;
	cin.ignore();
	cout << "Enter new info: ";
	getline(cin, new_dOB);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_dOB(new_dOB);
		writeFile(output_text_file);
	 	cout << "New date of birth update success!" << endl;
 }
 else {
 		cout << "No change is commited" << endl;
 }
}

void StaffList::changeAddress(int id) {
	cout << "Staff's address: ";
	staff_pos i = posOfID(id);
	cout << i->Get_address() << endl;	
	string new_address;
	cin.ignore();
	cout << "Enter new address: ";
	getline(cin, new_address);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_address(new_address);
		writeFile(output_text_file);
	 	cout << "New address update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

void StaffList::changeSalRate(int id) {	
	cout << "Staff's salary rate: ";
	staff_pos i = posOfID(id);
	cout << i->Get_sal_rate() << endl;	
	int new_sal_rate;
	cout << "Enter salary rate: ";
	while (!(cin >> new_sal_rate)||new_sal_rate<0) {
		cout << "Invalid salary rate!" << endl << "Enter new salary rate: ";
		cin.clear();
		cin.ignore(256,'\n');
	}
	if (userConfirm()) {
		i->Set_sal_rate(new_sal_rate);
		writeFile(output_text_file);
	 	cout << "New info update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

void StaffList::changeDept(int id) {
	cout << "Staff's department: ";
	staff_pos i = posOfID(id);
	cout << i->Get_dept() << endl;	
	string new_dept;
	cin.ignore();
	cout << "Enter department: ";
	getline(cin, new_dept);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_dept(new_dept);
		writeFile(output_text_file);
	 	cout << "New department update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

void StaffList::changePos(int id) {
	cout << "Staff's position: ";
	staff_pos i = posOfID(id);
	cout << i->Get_pos() << endl;	
	string new_pos;
	cin.ignore();
	cout << "Enter new position: ";
	getline(cin, new_pos);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_pos(new_pos);
		writeFile(output_text_file);
	 	cout << "New position update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

