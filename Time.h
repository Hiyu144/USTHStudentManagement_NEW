#ifndef TIME_H_
#define TIME_H_
#include<string>
#include<ctime>
#include<iostream>
using namespace std;
class Time {
		//time_t t_time;
		struct tm time_struct;		
	public:
		static const string wday_name[];
  		static const string mon_name[];
		Time();
		~Time();
		Time(string);
		Time(struct tm);
		
		int Get_hour();
		int Get_minute();
		int Get_second();
		int Get_monthday();
		int Get_weekday();
		int Get_month();
		int Get_year();		
		
		void Set_hour(int);
		void Set_minute(int);
		void Set_second(int);
		void Set_monthday(int);		
		void Set_weekday(int);		
		void Set_month(int);
		void Set_year(int);
		
		string toString();
};
#endif

