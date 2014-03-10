#ifndef STAFF_H_
#define STAFF_H_
//#pragma once

#include "Person.h"
#include<iostream>
#include<string>

using namespace std;

class Staff:public Person {		
		string dept;
		string pos;
		int sal_rate;
	public:
		Staff();
		~Staff();
		Staff (int, string, string, string, string, string, int);
		//Person (Person);
		
		void Print();
		
		void Set_sal_rate(int);
		void Set_dept(string);
		void Set_pos(string);
		
		int Get_sal_rate();
		string Get_dept();
		string Get_pos();
};
#endif
