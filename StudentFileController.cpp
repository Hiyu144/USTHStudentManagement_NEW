#include "StudentList.h"
#include <string.h>
//input, output file name

//them 1 sv tu xau oString vao mang l[] voi size la so sv truoc khi them
void subString(string oString, Student l[], int &size) {
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
   l[size] = sv;
   size++;      
}


//readFile, ghi vao mang l[] voi size la so sv truoc khi them
	void readFile(string _file, Student l[], int &size){
		ifstream fin;
		fin.open(_file.c_str());
		if(!fin.is_open())
	    {
	        cout<<"Khong the mo file.\n";
	        exit(1);
	    }else{
	    	string s = "";	    	
	    	while (getline(fin, s)){
				subString(s, l, size);
			}
			fin.close();
	    }	
	}

//writeFile
	void writeFile(string _file, Student l[], int size){
		ofstream fout;
	    fout.open(_file.c_str());
		for (int i=0 ; i<size ; i++){
			fout << l[i].Get_id() << ":" << l[i].Get_name() << ":" << l[i].Get_dOB() << ":" << l[i].Get_address() 
					 << ":" << l[i].Get_enter_year() << ":" <<l[i].Get_class_name()<< ":" << l[i].Get_major() <<endl;
		}
		fout.close();
	}

//print the loaded list of students
	void printStuList(Student l[], int size)
	{
		for (int i=0 ; i<size ; i++){
			l[i].Print();
		}
	}
