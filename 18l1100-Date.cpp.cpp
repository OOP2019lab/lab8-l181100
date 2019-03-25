#include"Date.h"
static string monthNames[13] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
Date :: Date()
{
	month = 1;
	date = 1;
	year = 2000;
}
Date :: Date(int month1,int date1,int year1)
{
		month = 1;
	date = 1;
	year = 2000;

	if(date1>0 && date1<=30)
		date = date1;

	if(month1>0 && month1<=12)
		month = month1;

	if(year1>=1000 && month1<=9999)
		year = year1;
}
ostream & operator << (ostream &out,Date &y)
{
		out<<y.month<< " _ "<<y.date<<" _ "<<y.year;
		return out;
}
istream &operator>>(istream &in,Date &y)
{
	int k=0;
		cout<<"enter date : ";
		in>>y.date;
		//  while(k=1)
		//  {
		//    if(y.date>0 && y.date<=30)
		//     {
		//	      k = 1;
		//     }
		//    else
		//     {
		//	     k =0;
		//	     cout<<"wrong input enter date again : ";
		//        in>>y.date;
		//     }
		//  }
		//	
		cout<<"enter month : ";
		in>>y.month;
		cout<<"enter year : ";
		in>>y.year;
		return in;
}
 bool operator == (const Date &obj1, const Date &obj2)
{
		return obj1.date == obj2.date;
		return obj1.year == obj2.year;
		return obj1.month == obj2.month;
}
 Date & operator + (Date &obj3,int num)
 {
		obj3.date=obj3.date+num;
		if(obj3.date>30)
		{
			obj3.date = 1;
			obj3.month=obj3.month+1;
		}
			if(obj3.month>12)
		{
			obj3.month = 1;
			obj3.year=obj3.year+1;
		}

		return obj3;
}


 Date &Date::operator--()
 {
	date=date-1;
if(date<1)
{
	date=30;
    month=month-1;
}
if(month<1)
{
	year = year-1;
	month =12;
}
return *this;
}
Date &Date::operator--(int obj4)
{
	Date xyz=*this;
date=date-1;
if(date<1)
{
	date=30;
	month=month-1;
}
if(month<1)
{
	year = year-1;
	month =12;
}
    
return xyz;
}
