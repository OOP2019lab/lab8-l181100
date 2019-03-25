#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
	int date,month,year;
public:
	static string monthname[1];
	Date();
	Date(int,int,int);
	Date(const Date &x);

	friend ostream & operator << (ostream &out,Date &y);

	friend istream &operator>>(istream &in,Date &y);

	friend bool operator == (const Date &obj1, const Date &obj2);
	friend Date & operator+(Date &obj,int n);
	  Date& operator--();
	  Date& operator--(int obj);
};