#include "Subject.h"

Subject::Subject(){
}

Subject::~Subject() {
	id = 0;
	name = "";
	num_credit = 0;
	type = "";
	pre_id = 0;
}

Subject::Subject(short id, string name, short num_credit, string type, short pre_id) {
	this->id = id;
	this->name = name;
	this->num_credit = num_credit;
	this->type = type;
	this->pre_id = pre_id;
}

short Subject::Get_id() {
	return this->id;
}

string Subject::Get_name() {
	return this->name;
}

short Subject::Get_num_credit() {
	return this->num_credit;
}

string Subject::Get_type() {
	return this->type;
}

short Subject::Get_pre_id() {
	return this->pre_id;
}

//Subject Subject::Get_pre_subject() {
//	return findSubjectByID(pre_id);
//}

void Subject::Print() {
	cout << id << ":";
	cout << name << ":";
	cout << num_credit << ":";
	cout << type << ":";
	cout << pre_id;
}

void Subject::Set_id(short id) {
	this->id = id;	
}

void Subject::Set_name(string name) {
	this->name = name;
}

void Subject::Set_num_credit(short num_credit) {
	this->num_credit = num_credit;
}

void Subject::Set_type(string type) {
	this->type = type;
}

void Subject::Set_pre_id(short pre_id) {
	this->pre_id = pre_id;
}
