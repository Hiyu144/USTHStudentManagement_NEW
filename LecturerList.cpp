#include "LecturerList.h"

//VERSION 5.3///////////////////////////////////
LecturerList::LecturerList() {
	output_text_file = "default_text_file.txt";
	input_text_file = "default_text_file.txt";
}

LecturerList::LecturerList(string file_name) {
	output_text_file = file_name;
	input_text_file = file_name;
	readFile(file_name);
}

LecturerList::~LecturerList() {
	output_text_file = "default_text_file.txt";
	input_text_file = "default_text_file.txt";
}
//Check if the ID is valid
bool LecturerList::isValidID(int id) {
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == id) return true;
	}
	return false;
}

//return the position of the ID on array


lecturer_pos LecturerList::posOfID(int id) {
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == id) return i;
	}
}

int LecturerList::newID() {
	int new_id = lec_list.back().Get_id() + 1;	
	lecturer_pos i;
	for (i = lec_list.begin(); i != lec_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == new_id) new_id++;
	}
	return new_id;
}

bool LecturerList::userConfirm() {
	cout << "Are you sure (Y/N)? ";
	//cin.ignore();
	char answer;
	cin >> answer;
	if ((answer == 'y')||(answer == 'Y')) return true;
	else return false;
}
