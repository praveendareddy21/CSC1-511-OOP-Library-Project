#include "Film.h"

#include <iostream>


Film::Film (string call_number1,string title1, string subjects1, string year1,
	string director1, string notes1)
	:Media(call_number1, title1, subjects1, notes1)
	,year(year1)
	,director(director1)
{

}

void Film::display() const
{
	cout<<"FILM"<<endl;
	Media::display();
	cout<<"Year   :"<<year<<endl;
	cout<<"Director   :"<<director<<endl;
}

bool Film::compare_other(const string& ss)
{
	if (string::npos != notes.find(ss)
			|| string::npos != director.find(ss)
			|| string::npos != year.find(ss))
	{
		return true;
	}
	else{
		return false;
	}

}

