#ifndef STUDENT_H_
#define STUDENT_H_
//#pragma once

#include "Person.h"
#include<iostream>
#include<string>
using namespace std;

class Student:public Person {
		int enter_year;
		string class_name;
		string major;
	public:
		Student();
		~Student();
		Student (int, string, string, string, int, string, string);
		//Person (Person);
		
		void Print();
		
		void Set_enter_year(int);
		void Set_class_name(string);
		void Set_major(string);
		
		int Get_enter_year();
		string Get_class_name();
		string Get_major();
};
#endif
