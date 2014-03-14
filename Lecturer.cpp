#include "Lecturer.h"		
Lecturer::Lecturer():Person() {
}

Lecturer::~Lecturer() {
	field = "";
	title = "";
	years = 0;
}

Lecturer::Lecturer (int id, string name, string dOB, string address, 
							string field, string title, int years)
				:Person (id, name, dOB, address) {
	this->field = field;
	this->title = title;
	this->years = years;
}
//Person (Person);

void Lecturer::Print() {
	Person::Print();
	cout << ":"<< field << ":";
	cout << title << ":";
	cout << years;
}

void Lecturer::Set_years(int years) {
	this->years = years;
}
void Lecturer::Set_field(string field) {
	this->field = field;
}
void Lecturer::Set_title(string title) {
	this->title = title;
}

int Lecturer::Get_years() {
	return years;
}
string Lecturer::Get_field() {
	return field;
}
string Lecturer::Get_title() {
	return title;
}
