#include "StaffList.h"

//VERSION 5.3///////////////////////////////////
StaffList::StaffList() {
	output_text_file = "default_text_file.txt";
	input_text_file = "default_text_file.txt";
}

StaffList::StaffList(string file_name) {
	output_text_file = file_name;
	input_text_file = file_name;
	readFile(file_name);
}

StaffList::~StaffList() {
	output_text_file = "default_text_file.txt";
	input_text_file = "default_text_file.txt";
}
//Check if the ID is valid
bool StaffList::isValidID(int id) {
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == id) return true;
	}
	return false;
}

//return the position of the ID on array


staff_pos StaffList::posOfID(int id) {
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == id) return i;
	}
}

int StaffList::newID() {
	int new_id = stf_list.back().Get_id() + 1;	
	staff_pos i;
	for (i = stf_list.begin(); i != stf_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == new_id) new_id++;
	}
	return new_id;
}

bool StaffList::userConfirm() {
	cout << "Are you sure (Y/N)? ";
	//cin.ignore();
	char answer;
	cin >> answer;
	if ((answer == 'y')||(answer == 'Y')) return true;
	else return false;
}
