#include "StudentList.h"
#include <string.h>

	void StudentList::subString(string oString) {
   string temp, t_name, t_Dob, t_add, t_pro, t_class_name;
   int t_id, t_enTr;
   //lay id
   int mark = oString.find(":");
   t_id = atoi(oString.substr(0,mark).c_str());
   
   //lay name
   temp = oString.substr(mark+1);                       
   mark = temp.find(":");
   t_name = temp.substr(0,mark);
   
   //lay DOB
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_Dob = temp.substr(0,mark);
   
   //Lay Address
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_add = temp.substr(0,mark);
   
   //Lay Entry Year
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_enTr = atoi(temp.substr(0,mark).c_str());
   
   //Lay class
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_class_name = temp.substr(0,mark);
	                           
   //Lay Programe
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_pro = temp.substr(0,mark);
	                           
   Student sv(t_id,t_name,t_Dob,t_add,t_enTr,t_class_name,t_pro); 
   stu_list.push_back(sv);
}


//readFile, ghi vao mang l[] voi size la so sv truoc khi them
	void StudentList::readFile(string _file){
		ifstream fin;
		fin.open(_file.c_str());
		if(!fin.is_open())
	    {
	        cout<<"Khong the mo file.\n";
	        exit(1);
	    }else{
	    	string s = "";
	    	while (getline(fin, s)){
				subString(s);
			}
			fin.close();
	    }	
	}

//writeFile
	void StudentList::writeFile(string _file){
		ofstream fout;
	    fout.open(_file.c_str());
	  student_pos i;
		for (i = stu_list.begin(); i != stu_list.end(); ++i){
			fout << i->Get_id() << ":" << i->Get_name() << ":" << i->Get_dOB() << ":" << i->Get_address() 
					 << ":" << i->Get_enter_year() << ":" <<i->Get_class_name()<< ":" <<i->Get_major() <<endl;
		}
		fout.close();
	}

//print the loaded list of students
	void StudentList::printStuList() {
		student_pos i;
		for (i = stu_list.begin(); i != stu_list.end(); ++i){
			i->Print();	
			cout << endl;		
		}
	}
