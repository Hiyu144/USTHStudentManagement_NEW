#ifndef LECTURER_H_
#define LECTURER_H_
//#pragma once

#include "Person.h"
#include<iostream>
#include<string>

using namespace std;

class Lecturer:public Person {		
		string field;
		string title;
		int years;
	public:
		Lecturer();
		~Lecturer();
		Lecturer (int, string, string, string, string, string, int);
		
		void Print();
		
		void Set_years(int);
		void Set_field(string);
		void Set_title(string);
		
		int Get_years();
		string Get_field();
		string Get_title();
};
#endif
