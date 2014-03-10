#ifndef STUDENTLIST_H_
#define STUDENTLIST_H_

#include "Student.h"
#include <iostream>
#include <list>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>

extern string output_text_file;
extern string input_text_file;
extern Student usth_student_list[1000];
extern int stu_list_size;

typedef std::list<Student>::iterator student_pos;//pointer to a student on the list
class StudentList {
	protected:
		list<Student> stu_list;
		string output_text_file;
		string input_text_file;
	public:
		StudentList();
		StudentList(string);
		~StudentList();
		//StudentList.cpp
		bool isValidID(int);
		student_pos posOfID(int);
		int newID();
		////////////////////////////
		//StudentMainScreen.cpp
		void mainScreen();
		////////////////////////////
		//StudentFileController.cpp
		void subString(string);
		void readFile(string);
		void writeFile(string);
		void printStuList();
		////////////////////////////	
		
		//StudentSearch.cpp	
		void mainSearch();
		void searchByName();
		void searchByDOB();
		void searchByAddress();
		void searchByEnterYear();
		void searchByClassName();
		void searchByMajor();
		////////////////////////////
		
		//StudentInfoChange.cpp
		void mainChangeStudentInfo();
		void changeStudentInfo(int);
		void changeName(int);
		void changeDOB(int);
		void changeAddress(int);
		void changeEnterYear(int);
		void changeClassName(int);
		void changeMajor(int);
		////////////////////////////
		
		//StudentAdd.cpp
		void mainAddStudent();
		void createStudent();
		//void directAddStudent(int, string, string, string, int, string, string);
		void addStudent(Student);
		////////////////////////////
		
		//StudentRemove.cpp
		void mainRemoveStudent();
		void removeStudent();
		////////////////////////////	
		
		};		
//		//extern list<Student> stu_least;
//		
//		//StudentList.cpp
//		bool isValidID(int);
//		int posOfID(int);
//		int newID(Student[], int);
//		////////////////////////////
//		//StudentMainScreen.cpp
//		void mainScreen();
//		////////////////////////////
//		//StudentFileController.cpp
//		void subString(string);
//		void readFile(string, Student[], int&);
//		void writeFile(string, Student[], int);
//		void printStuList(Student[], int);
//		////////////////////////////	
//		
//		//StudentSearch.cpp	
//		void mainSearch();
//		void searchByName();
//		void searchByDOB();
//		void searchByAddress();
//		void searchByEnterYear();
//		void searchByClassName();
//		void searchByMajor();
//		////////////////////////////
//		
//		//StudentInfoChange.cpp
//		void mainChangeStudentInfo();
//		void changeStudentInfo(int);
//		void changeName(int);
//		void changeDOB(int);
//		void changeAddress(int);
//		void changeEnterYear(int);
//		void changeClassName(int);
//		void changeMajor(int);
//		////////////////////////////
//		
//		//StudentAdd.cpp
//		void mainAddStudent();
//		void createStudent();
//		//void directAddStudent(int, string, string, string, int, string, string);
//		void addStudent(Student, Student[], int&);
//		////////////////////////////
//		
//		//StudentRemove.cpp
//		void mainRemoveStudent();
//		void removeStudent(Student[], int&);
//		////////////////////////////	
#endif
