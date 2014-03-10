#include "Person.h"

Person::Person(){
}

Person::~Person() {
	id = 0;
	name = "";
	dOB = "";
	address = "";
}

Person::Person(int id, string name, string dOB, string address) {
	this->id = id;
	this->name = name;
	this->dOB = dOB;
	this->address = address;
}


int Person::Get_id() {
	return this->id;
}

string Person::Get_name() {
	return this->name;
}

string Person::Get_dOB() {
	return this->dOB;
}

string Person::Get_address() {
	return this->address;
}

void Person::Print() {
	cout << id << ":";
	cout << name << ":";
	cout << dOB << ":";
	cout << address;
}

void Person::Set_id(int id) {
	this->id= id;	
}

void Person::Set_name(string name) {
	this->name = name;
}

void Person::Set_dOB(string dOB) {
	this->dOB = dOB;
}

void Person::Set_address(string address) {
	this->address = address;
}
