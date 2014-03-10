#include "StudentList.h"

string output_text_file = "USTH_student_list.txt";
string input_text_file = "USTH_student_list.txt";
Student usth_student_list[1000];
int stu_list_size = 0;

////Check if the ID is valid
//bool isValidID(int id) {
//	for (int i = 0; i < stu_list_size; ++i) {
//		int currentID = usth_student_list[i].Get_id();
//		if (currentID == id) return true;
//	}
//	return false;
//}
//
////return the position of the ID on array
////return -1 if fail
//
//int posOfID(int id) {
//	for (int i = 0; i < stu_list_size; ++i) {
//		int currentID = usth_student_list[i].Get_id();
//		if (currentID == id) return i;
//	}
//	return -1;
//}
//
//int newID(Student l[], int size) {
//	int new_id = l[size-1].Get_id() + 1;
//	for (int i = 0; i < size; ++i) {
//		if (l[i].Get_id() == new_id) new_id++;
//	}
//	return new_id;
//}
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
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
