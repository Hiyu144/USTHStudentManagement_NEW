#ifndef LECTURERLIST_H_
#define LECTURERLIST_H_

#include "Lecturer.h"
#include <iostream>
#include <list>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>

typedef std::list<Lecturer>::iterator student_pos;//pointer to a student on the list
class LecturerList {
	protected:
		list<Lecturer> lec_list;
		string output_text_file;
		string input_text_file;
	public:
		LecturerList();
		LecturerList(string);
		~LecturerList();
		//LecturerList.cpp
		bool isValidID(int);
		student_pos posOfID(int);
		int newID();
		bool userConfirm();
		////////////////////////////
		//LecturerMainScreen.cpp
		void mainScreen();
		////////////////////////////
		//LecturerFileController.cpp
		void subString(string);
		void readFile(string);
		void writeFile(string);
		void printLecList();
		////////////////////////////	
		
		//LecturerSearch.cpp	
		void mainSearch();
		void searchByName();
		void searchByDOB();
		void searchByAddress();
		void searchByYears();
		void searchByField();
		void searchByTitle();
		////////////////////////////
		
		//LecturerInfoChange.cpp
		void mainChangeLecturerInfo();
		void changeLecturerInfo(int);
		void changeName(int);
		void changeDOB(int);
		void changeAddress(int);
		void changeYears(int);
		void changeField(int);
		void changeTitle(int);
		////////////////////////////
		
		//LecturerAdd.cpp
		void mainAddLecturer();
		void createLecturer();
		//void directAddLecturer(int, string, string, string, int, string, string);
		void addLecturer(Lecturer);
		////////////////////////////
		
		//LecturerRemove.cpp
		void mainRemoveLecturer();
		void removeLecturer();
		////////////////////////////	
		
		};		
#endif
