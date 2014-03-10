#ifndef PERSON_H_
#define PERSON_H_
//#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person {
	protected:
		int id;
		string name;
		string dOB;
		string address;
	public:
		Person();
		~Person();
		Person (int, string, string, string);
		//Person (Person);
		void Print();
		void Set_name(string);
		void Set_dOB(string);
		void Set_address(string);
		void Set_id(int);
		
		int Get_id();
		string Get_name();
		string Get_dOB();
		string Get_address();
};
#endif
