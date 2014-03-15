#include "StaffList.h"
#include <string.h>

	void StaffList::subString(string oString) {
   string temp, t_name, t_Dob, t_add, t_pos, t_dept;
   int t_id, t_sal_rate;
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
   
   //Lay department
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_dept = temp.substr(0,mark);
	                           
   //Lay position
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_pos = temp.substr(0,mark);
   
   //Lay salary rate
   temp = temp.substr(mark+1);			              
   mark = temp.find(":");
   t_sal_rate = atoi(temp.substr(0,mark).c_str());
	                           
   Staff tf(t_id,t_name,t_Dob,t_add,t_dept,t_pos,t_sal_rate); 
   stf_list.push_back(tf);
}


//readFile, ghi vao mang l[] voi size la so stf truoc khi them
	void StaffList::readFile(string _file){
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
	void StaffList::writeFile(string _file){
		ofstream fout;
	    fout.open(_file.c_str());
	  staff_pos i;
		for (i = stf_list.begin(); i != stf_list.end(); ++i){
			fout << i->Get_id() << ":" << i->Get_name() << ":" << i->Get_dOB() << ":" << i->Get_address() 
					 << ":" << i->Get_dept()<< ":" << i->Get_pos()  << ":" << i->Get_sal_rate() << endl;
		}
		fout.close();
	}

//print the loaded list of staffs
	void StaffList::printStfList() {
		staff_pos i;
		for (i = stf_list.begin(); i != stf_list.end(); ++i){
			i->Print();	
			cout << endl;		
		}
	}
