#ifndef SUBJECT_H_
#define SUBJECT_H_
//#pragma once

#include<iostream>
#include<string>

using namespace std;

class Subject {		
		short id;
		string name;
		short num_credit;
		string type;
		short pre_id;
	public:
		Subject();
		~Subject();
		Subject (short, string, short, string, short);						
		
		void Set_id(short);
		void Set_name(string);
		void Set_type(string);
		void Set_pre_id(short);
		void Set_num_credit(short);
		
		short Get_id();
		string Get_name();
		string Get_type();
		short Get_pre_id();
		short Get_num_credit();
		//short Get_pre_subject();
		
		void Print();
};
#endif
