#ifndef USTHCLASS_H_
#define USTHCLASS_H_
//#pragma once

#include<iostream>
#include<string>
#include<ctime>

#include "Subject.h"
#include "Lecturer.h"
using namespace std;

typedef string Room;
typedef struct tm Date;
class USTHClass {
		int id;		
		int subjectID;
		int lecturerID;
		Subject subject;
		Lecturer lecturer;
		Date begin_time;
		Date end_time;
		Room class_room;
		int semester;
	public:
		USTHClass();
		~USTHClass();
		USTHClass (int, int, int, Date, Date, Room, int);						
		
		void Set_id(int);
		void Set_subjectID(int);
		void Set_lecturerID(int);
		void Set_begin_time(Date);
		void Set_end_time(Date);
		void Set_class_room(Room);
				
		int Get_id();
		int Get_subjectID();
		int Get_lecturerID();
		Date Get_begin_time();
		Date Get_end_time();
		Room Get_class_room();		
		
		void Print();
		void ShortPrint();
};
#endif
