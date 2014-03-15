#ifndef STAFFLIST_H_
#define STAFFLIST_H_

#include "Staff.h"
#include <iostream>
#include <list>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>

typedef std::list<Staff>::iterator staff_pos;//pointer to a staff member on the list
class StaffList {
	protected:
		list<Staff> stf_list;
		string output_text_file;
		string input_text_file;
	public:
		StaffList();
		StaffList(string);
		~StaffList();
		//StaffList.cpp
		bool isValidID(int);
		staff_pos posOfID(int);
		int newID();
		bool userConfirm();
		////////////////////////////
		//StaffMainScreen.cpp
		void mainScreen();
		////////////////////////////
		//StaffFileController.cpp
		void subString(string);
		void readFile(string);
		void writeFile(string);
		void printStfList();
		////////////////////////////	
		
		//StaffSearch.cpp	
		void mainSearch();
		void searchByName();
		void searchByDOB();
		void searchByAddress();
		void searchBySalRate();
		void searchByDept();
		void searchByPos();
		////////////////////////////
		
		//StaffInfoChange.cpp
		void mainChangeStaffInfo();
		void changeStaffInfo(int);
		void changeName(int);
		void changeDOB(int);
		void changeAddress(int);
		void changeSalRate(int);
		void changeDept(int);
		void changePos(int);
		////////////////////////////
		
		//StaffAdd.cpp
		void mainAddStaff();
		void createStaff();
		//void directAddStaff(int, string, string, string, int, string, string);
		void addStaff(Staff);
		////////////////////////////
		
		//StaffRemove.cpp
		void mainRemoveStaff();
		void removeStaff();
		////////////////////////////	
		
		};		
#endif
