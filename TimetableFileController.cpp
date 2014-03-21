//#include "Timetable.h"
//#include <string.h>	
//void LecturerList::subString(string oString) {
//	string temp, t_name, t_Dob, t_add, t_title, t_field;
//	int t_id, t_exp;
//	//lay id
//	int mark = oString.find(":");
//	t_id = atoi(oString.substr(0,mark).c_str());
//	
//	//lay name
//	temp = oString.substr(mark+1);                       
//	mark = temp.find(":");
//	t_name = temp.substr(0,mark);
//	
//	//lay DOB
//	temp = temp.substr(mark+1);			              
//	mark = temp.find(":");
//	t_Dob = temp.substr(0,mark);
//	
//	//Lay Address
//	temp = temp.substr(mark+1);			              
//	mark = temp.find(":");
//	t_add = temp.substr(0,mark);
//	
//	//Lay field of study
//	temp = temp.substr(mark+1);			              
//	mark = temp.find(":");
//	t_field = temp.substr(0,mark);
//	                         
//	//Lay title
//	temp = temp.substr(mark+1);			              
//	mark = temp.find(":");
//	t_title = temp.substr(0,mark);
//	
//	//Lay Experience Year
//	temp = temp.substr(mark+1);			              
//	mark = temp.find(":");
//	t_exp = atoi(temp.substr(0,mark).c_str());
//	                         
//	Lecturer lc(t_id,t_name,t_Dob,t_add,t_field,t_title,t_exp); 
//	lec_list.push_back(lc);
//}


////readFile, ghi vao mang l[] voi size la so gv truoc khi them
//void LecturerList::readFile(string _file){
//	ifstream fin;
//	fin.open(_file.c_str());
//	if(!fin.is_open())
//    {
//        cout<<"Khong the mo file.\n";
//        exit(1);
//    }else{
//    	string s = "";
//    	while (getline(fin, s)){
//			subString(s);
//		}
//		fin.close();
//    }	
//}

////writeFile
//void LecturerList::writeFile(string _file){
//	ofstream fout;
//    fout.open(_file.c_str());
//  lecturer_pos i;
//	for (i = lec_list.begin(); i != lec_list.end(); ++i){
//		fout << i->Get_id() << ":" << i->Get_name() << ":" << i->Get_dOB() << ":" << i->Get_address() 
//				 << ":" << i->Get_field()<< ":" << i->Get_title()  << ":" << i->Get_years() << endl;
//	}
//	fout.close();
//}

////print the loaded list of lecturers
//void LecturerList::printLecList() {
//	lecturer_pos i;
//	for (i = lec_list.begin(); i != lec_list.end(); ++i){
//		i->Print();	
//		cout << endl;		
//	}
//}
