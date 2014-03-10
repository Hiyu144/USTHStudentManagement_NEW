#include "Staff.h"		
Staff::Staff():Person() {
}

Staff::~Staff() {
	dept = "";
	pos = "";
	sal_rate = 0;
}

Staff::Staff (int id, string name, string dOB, string address, 
							string dept, string pos, int sal_rate)
			:Person (id, name, dOB, address) {
	this->dept = dept;
	this->pos = name;
	this->sal_rate = sal_rate;
}
//Person (Person);

void Staff::Print() {
	Person::Print();
	cout << dept << endl;
	cout << pos << endl;
	cout << sal_rate << endl;
}

void Staff::Set_sal_rate(int sal_rate) {
	this->sal_rate = sal_rate;
}
void Staff::Set_dept(string dept) {
	this->dept = dept;
}
void Staff::Set_pos(string pos) {
	this->pos = pos;
}

int Staff::Get_sal_rate() {
	return sal_rate;
}
string Staff::Get_dept() {
	return dept;
}
string Staff::Get_pos() {
	return pos;
}
