#include "StudentList.h"

//"Info change" screen for user
//Display lines:
//1. Search.
//2. Enter student ID.
//0. Back.
//Enter command:
////////////////////
//When user input, call the respective functions:
//'1': mainSearch()
//'2': Display lines: 
//		Enter student Id:
// 		//If the enter Id is invalid, ask for re-enter.
//		//If the enter Id = -1: return;
//		//Else call changeStudentInfo();
//'0': return;
//Otherwise: show error, ask for other input.
void mainChangeStudentInfo() {
	for (;;) {
		cout << endl << endl;
		cout << "Change a student info: " << endl;
		cout << "1. Search." << endl;
		cout << "2. Enter student's ID'." << endl;	  
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
	  	case 2: cout << "Enter student ID: ";
	  				while (!(cin >> id)||id<0) {
							cout << "Invalid Id!" << endl;
							cin.clear();
							cin.ignore(256,'\n');
						}
	  					if (isValidID(id)) changeStudentInfo(id);	  
							else cout << "There is no student with the id: " << id << endl;					
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
//4. change enter year.
//5. change class name.
//6. change major.
//0. Back
//Enter command:
/////////////////////
//When user input, call the respective functions:
//changeName()
//changeDOB()
//changeAddress()
//changeEnterYear()
//changeClassName()
//changeMajor()
void changeStudentInfo(int id) {
	for(;;) {
		cout << "Student Info: " << endl;
		int i = posOfID(id);
		usth_student_list[i].Print();
		cout << endl;		
		cout << "Choose one type of change: " << endl;
		cout << "1. Change name." << endl;
		cout << "2. Change dOB." << endl;
	  cout << "3. Change address." << endl;
	  cout << "4. Change entry year." << endl;
	  cout << "5. Change class name." << endl;
	  cout << "6. Change major." << endl;
	  cout << "0. Back." << endl;
	  
	  cout << "Enter a number: ";
	  
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
	  	case 4: changeEnterYear(id);
	  					//mainScreen(); 					
	  					break;
	  	case 5: changeClassName(id);
	  					break;
	  	case 6: changeMajor(id);
	  					break;
	  	case 0: return;
	  	default: 
	  		cout << "Invalid command!" << endl;
	  		break;
	  		
	  }		
	}//
}

//With each function, display the current student info, 
//ask for new info, ask for re-enter if the info is invalid
//update student info in usth_student_list[]
//call writeFile() to update the new info in output_text_file
void changeName(int id) {
	cout << "Student Name: " << endl;
	int i = posOfID(id);
	cout << usth_student_list[i].Get_name() << endl;	
	string new_name;
	cin.ignore();
	cout << "Enter new name: ";
	getline(cin, new_name);//cin >> new_name if new_name is integer!
	usth_student_list[i].Set_name(new_name);
	writeFile(output_text_file, usth_student_list, stu_list_size);
 	cout << "Name update success!" << endl;
}

void changeDOB(int id) {
	cout << "Date of Birth: " << endl;
	int i = posOfID(id);
	cout << usth_student_list[i].Get_dOB() << endl;	
	string new_dOB;
	cin.ignore();
	cout << "Enter new info: ";
	getline(cin, new_dOB);//cin >> new_name if new_name is integer!
	usth_student_list[i].Set_dOB(new_dOB);
	writeFile(output_text_file, usth_student_list, stu_list_size);
 	cout << "New date of birth update success!" << endl;
}

void changeAddress(int id) {
	cout << "Student's address: " << endl;
	int i = posOfID(id);
	cout << usth_student_list[i].Get_address() << endl;	
	string new_address;
	cin.ignore();
	cout << "Enter new address: ";
	getline(cin, new_address);//cin >> new_name if new_name is integer!
	usth_student_list[i].Set_address(new_address);
	writeFile(output_text_file, usth_student_list, stu_list_size);
 	cout << "New address update success!" << endl;
}

void changeEnterYear(int id) {	
	cout << "Student's enter year: " << endl;
	int i = posOfID(id);
	cout << usth_student_list[i].Get_enter_year() << endl;	
	int new_enter_year;
	cout << "Enter new enter year: ";
	while (!(cin >> new_enter_year)||new_enter_year<0) {
		cout << "Invalid enter year!" << endl << "Enter new enter year: ";
		cin.clear();
		cin.ignore(256,'\n');
	}
	usth_student_list[i].Set_enter_year(new_enter_year);
	writeFile(output_text_file, usth_student_list, stu_list_size);
 	cout << "New info update success!" << endl;
}

void changeClassName(int id) {
	cout << "Student's class name: " << endl;
	int i = posOfID(id);
	cout << usth_student_list[i].Get_class_name() << endl;	
	string new_class_name;
	cin.ignore();
	cout << "Enter new class name: ";
	getline(cin, new_class_name);//cin >> new_name if new_name is integer!
	usth_student_list[i].Set_class_name(new_class_name);
	writeFile(output_text_file, usth_student_list, stu_list_size);
 	cout << "New class name update success!" << endl;
}

void changeMajor(int id) {
	cout << "Student's major: " << endl;
	int i = posOfID(id);
	cout << usth_student_list[i].Get_major() << endl;	
	string new_major;
	cin.ignore();
	cout << "Enter new major: ";
	getline(cin, new_major);//cin >> new_name if new_name is integer!
	usth_student_list[i].Set_major(new_major);
	writeFile(output_text_file, usth_student_list, stu_list_size);
 	cout << "New major update success!" << endl;
}

