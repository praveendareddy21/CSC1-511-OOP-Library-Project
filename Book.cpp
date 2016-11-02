#include "Book.h"
#include <iostream>

using namespace std;


Book::Book(string call_number1,string title1,string subjects1, string author1,
	string description1, string publisher1 , string city1 , string year1,
             string series1, string notes1)
	:Media(call_number1, title1,subjects1, notes1)
	,author( author1)
	,description(description1)
	,publisher(publisher1)
	,city(city1)
	,year(year1)
	,series(series1)

{

}

void Book::display() const
{

	cout<<"BOOK"<<endl;
	Media::display();
	cout<<"Author    :"<<author<<endl;
	cout<<"Description    :"<<description<<endl;
	cout<<"Publisher    :"<<publisher<<endl;
	cout<<"City   :"<<city<<endl;
	cout<<"Year    :"<<year<<endl;
	cout<<"Series   :"<<series<<endl;

}

bool Book::compare_other(const string& ss)
{
	if (string::npos != notes.find(ss)
			||string::npos != description.find(ss)
			||string::npos != year.find(ss))
	{
		return true;
	}
	else{
		return false;
	}
}

