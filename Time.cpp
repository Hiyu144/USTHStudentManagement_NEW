#include "Time.h"

const string Time::wday_name[] = {
    "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
};
const string Time::mon_name[] = {
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};
Time::Time() {
	//time = time(NULL);
	//time_struct = *localtime(&rawtime);
}

Time::~Time() {
	//time = time(NULL);
	//time_struct = *localtime(&rawtime);
}

Time::Time(string stime) {
	int i;
	//int l = stime.length();
	//Wed Feb 13 15:46:11 2013
	string wday = stime.substr(0, 3);
	for (i = 0; i < 7; ++i) 
		if (wday == wday_name[i]) time_struct.tm_wday = i;
	string mon = stime.substr(4, 3);	
	cout << mon;
	for (i = 0; i < 12; ++i) 
		if (mon == mon_name[i]) time_struct.tm_mon = i;
	cout << "PASS";
}

Time::Time(struct tm time_struct) {
	this->time_struct = time_struct;
	//t_time = mktime(* time_struct);
}

/////////////////////////

int Time::Get_hour() {
	return time_struct.tm_hour;
}
int Time::Get_minute() {
	return time_struct.tm_min;
}
int Time::Get_second() {
	return time_struct.tm_sec;
}
int Time::Get_monthday() {
	return time_struct.tm_mday;
}
int Time::Get_weekday() {
	return time_struct.tm_wday;
}
int Time::Get_month() {
	return time_struct.tm_mon;
}
int Time::Get_year() {
	return time_struct.tm_year;
}

//////////////////////////

void Time::Set_hour(int h) {
	time_struct.tm_hour = h;
}

void Time::Set_minute(int m) {
	time_struct.tm_min = m;
}
void Time::Set_second(int s) {
	time_struct.tm_sec = s;
}
void Time::Set_monthday(int md) {
	time_struct.tm_mday = md;
}
void Time::Set_weekday(int wd) {
	time_struct.tm_wday = wd;
}
void Time::Set_month(int mo) {
	time_struct.tm_mon = mo;
}
void Time::Set_year(int y) {
	time_struct.tm_year = y;
}

///////////////////////////

string Time::toString() {
	return asctime(&time_struct);
}
