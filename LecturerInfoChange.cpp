#include "LecturerList.h"

//"Info change" screen for user
//Display lines:
//1. Search.
//2. Enter lecturer ID.
//0. Back.
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': mainSearch()
//'2': Display lines: 
//		Enter lecturer Id:
// 		//If the enter Id is invalid, ask for re-enter.
//		//If the enter Id = -1: return;
//		//Else call changeLecturerInfo();
//'0': return;
//Otherwise: show error, ask for other input.
void LecturerList::mainChangeLecturerInfo() {
	for (;;) {
		cout << endl << endl;
		cout << "Change a lecturer info: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Enter lecturer's ID'." << endl;	  
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
	  	case 2: cout << "Enter lecturer ID: ";
	  				while (!(cin >> id)||id<0) {
							cout << "Invalid Id!" << endl;
							cin.clear();
							cin.ignore(256,'\n');
						}
	  					if (isValidID(id)) changeLecturerInfo(id);	  
							else cout << "There is no lecturer with the id: " << id << endl;					
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
//4. change experience year.
//5. change field.
//6. change title.
//0. Back
//Enter command:
/////////////////////
//When user input, call the respective functions:
//changeName()
//changeDOB()
//changeAddress()
//changeExpYear()
//changeField()
//changeTitle()
void LecturerList::changeLecturerInfo(int id) {
	for(;;) {
		cout << "Lecturer Info: " << endl;
		lecturer_pos i = posOfID(id);
		i->Print();
		cout << endl;		
		cout << "Choose one type of change: " << endl;
		cout << "1. Change name." << endl;
		cout << "2. Change dOB." << endl;
	  cout << "3. Change address." << endl;
	  cout << "4. Change field." << endl;
	  cout << "5. Change title." << endl;
	  cout << "6. Change experience year." << endl;
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
	  	case 4: changeField(id);
	  					break;
	  	case 5: changeTitle(id);
	  					break;
	  	case 6: changeExpYear(id);
	  					//mainScreen(); 					
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}//
}

//With each function, display the current lecturer info, 
//ask for new info, ask for re-enter if the info is invalid
//update lecturer info in usth_lecturer_list[]
//call writeFile() to update the new info in output_text_file
void LecturerList::changeName(int id) {
	cout << "Lecturer Name: " << endl;
	lecturer_pos i = posOfID(id);
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

void LecturerList::changeDOB(int id) {
	cout << "Date of Birth: " << endl;
	lecturer_pos i = posOfID(id);
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

void LecturerList::changeAddress(int id) {
	cout << "Lecturer's address: " << endl;
	lecturer_pos i = posOfID(id);
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

void LecturerList::changeExpYear(int id) {	
	cout << "Lecturer's experience years: " << endl;
	lecturer_pos i = posOfID(id);
	cout << i->Get_years() << endl;	
	int new_exp_year;
	cout << "Enter new experience year: ";
	while (!(cin >> new_exp_year)||new_exp_year<0) {
		cout << "Invalid experience year!" << endl << "Enter new experience year: ";
		cin.clear();
		cin.ignore(256,'\n');
	}
	if (userConfirm()) {
		i->Set_years(new_exp_year);
		writeFile(output_text_file);
	 	cout << "New info update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

void LecturerList::changeField(int id) {
	cout << "Lecturer's field of study: " << endl;
	lecturer_pos i = posOfID(id);
	cout << i->Get_field() << endl;	
	string new_field;
	cin.ignore();
	cout << "Enter field study: ";
	getline(cin, new_field);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_field(new_field);
		writeFile(output_text_file);
	 	cout << "New field of study update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

void LecturerList::changeTitle(int id) {
	cout << "Lecturer's title: " << endl;
	lecturer_pos i = posOfID(id);
	cout << i->Get_title() << endl;	
	string new_title;
	cin.ignore();
	cout << "Enter new title: ";
	getline(cin, new_title);//cin >> new_name if new_name is integer!
	if (userConfirm()) {
		i->Set_title(new_title);
		writeFile(output_text_file);
	 	cout << "New title update success!" << endl;
	} else {
		cout << "No change is commited" << endl;
	}
}

