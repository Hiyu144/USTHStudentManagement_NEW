#include "USTHClass.h"
USTHClass::USTHClass() {
	id = 0;
	subjectID = 0;
	lecturerID = 0;
	time_t rawtime;
	//time(&rawtime);	
	begin_time = *localtime(&rawtime);
	end_time = *localtime(&rawtime);
	class_room = "";
	semester = 0;
}

USTHClass::~USTHClass() {
	id = 0;
	subjectID = 0;
	lecturerID = 0;
	time_t rawtime;
	//time(&rawtime);	
	begin_time = *localtime(&rawtime);
	end_time = *localtime(&rawtime);
	class_room = "";
	semester = 0;
}

USTHClass::USTHClass(int id, int subjectID, int lecturerID, 
											Date begin_time, Date end_time, 
											Room class_room, int semester) {
	this->id = id;
	this->subjectID = subjectID;
	this->lecturerID = lecturerID;
	this->begin_time = begin_time;
	this->end_time = end_time;
	this->class_room = class_room;
	this->semester = semester;
	
	
}	

void USTHClass::Print() {
	cout << "classID: " << id << endl;
	cout << "subjectID: " << subjectID << endl;
	cout << "lecturerID: " << lecturerID << endl;
	cout << "start time: " << asctime(&begin_time);
	cout << "end time: " << asctime(&end_time);
	cout << "class room: " << class_room;
	//cout << endl << &begin_time << &end_time;
}

void USTHClass::ShortPrint() {
	cout << id << endl;
	cout << "subjectID: " << subjectID << endl;
	cout << "lecturerID: " << lecturerID << endl;
	cout << "start time: " << asctime(&begin_time);
	cout << "end time: " << asctime(&end_time);
	cout << "class room: " << class_room;
}
void USTHClass::Set_id(int id) {
	this->id = id;
}
void USTHClass::Set_subjectID(int subjectID) {
	this->subjectID = subjectID;
}
void USTHClass::Set_lecturerID(int lecturerID) {
	this->lecturerID = lecturerID;
}
void USTHClass::Set_begin_time(Date begin_time) {
	this->begin_time =begin_time;
}
void USTHClass::Set_end_time(Date end_time) {
	this->end_time = end_time;
}
void USTHClass::Set_class_room(Room class_room) {
	this->class_room = class_room;
}
		
int USTHClass::Get_id() {
	return id;
}
int USTHClass::Get_subjectID() {
	return subjectID;
}
int USTHClass::Get_lecturerID() {
	return lecturerID;
}
Date USTHClass::Get_begin_time() {
	return begin_time;
}
Date USTHClass::Get_end_time() {
	return end_time;
}
Room USTHClass::Get_class_room() {
	return class_room;
}
