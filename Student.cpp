#include "Student.h"

Student::Student():Person() {
}

Student::~Student() {
	enter_year = 0;
	class_name = "";
	major = "";
}
Student::Student (int id, string name, string dOB, string address,
									int enter_year, string class_name, string major)
				:Person(id, name, dOB, address) {					
	this->enter_year = enter_year;
	this->class_name = class_name;
	this->major = major;
}
//Person (Person);

void Student::Print() {
	Person::Print();
	cout << ":"<< enter_year << ":";
	cout << class_name << ":";
	cout << major;
}

void Student::Set_enter_year(int enter_year) {
	this->enter_year = enter_year;
}
void Student::Set_class_name(string class_name) {
	this ->class_name = class_name;
}
void Student::Set_major(string major) {
	this->major = major;
}

int Student::Get_enter_year() {
	return enter_year;
}
string Student::Get_class_name() {
	return class_name;
}
string Student::Get_major() {
	return major;
}
