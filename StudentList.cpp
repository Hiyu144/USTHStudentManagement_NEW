#include "StudentList.h"

//VERSION 5.3///////////////////////////////////
StudentList::StudentList() {
	output_text_file = "default_text_file.txt";
	input_text_file = "default_text_file.txt";
}

StudentList::StudentList(string file_name) {
	output_text_file = file_name;
	input_text_file = file_name;
	readFile(file_name);
}

StudentList::~StudentList() {
	output_text_file = "default_text_file.txt";
	input_text_file = "default_text_file.txt";
}
//Check if the ID is valid
bool StudentList::isValidID(int id) {
	student_pos i;
	for (i = stu_list.begin(); i != stu_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == id) return true;
	}
	return false;
}

//return the position of the ID on array


student_pos StudentList::posOfID(int id) {
	student_pos i;
	for (i = stu_list.begin(); i != stu_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == id) return i;
	}
}

int StudentList::newID() {
	int new_id = stu_list.back().Get_id() + 1;	
	student_pos i;
	for (i = stu_list.begin(); i != stu_list.end(); ++i) {
		int currentID = i->Get_id();
		if (currentID == new_id) new_id++;
	}
	return new_id;
}

bool StudentList::userConfirm() {
	cout << "Are you sure (Y/N)? ";
	//cin.ignore();
	char answer;
	cin >> answer;
	if ((answer == 'y')||(answer == 'Y')) return true;
	else return false;
}
