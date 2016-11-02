#include "periodic.h"

#include <iostream>
//#include <conio.h>



Periodic::Periodic(string call_number1,string title1,	string subjects1, string author1 ,
	string description1, string publisher1 , string publishing_history1 , string series1,
	string notes1, string related_titles1, string ofot1, string govNum1)
	:Media(call_number1, title1,subjects1, notes1)
	,author(author1)
	,description(description1)
	,publisher(publisher1)
	,publishing_history(publishing_history1)
	,related_titles(related_titles1)
	,series(series1)
	,other_form_title(ofot1)
	,govt_doc_num(govNum1)

{

}

void Periodic::display() const
{
	cout<<"PERIODIC"<<endl;
	Media::display();
	cout<<"Author    :"<<author<<endl;
	cout<<"Description    :"<<description<<endl;
	cout<<"Publisher    :"<<publisher<<endl;
	cout<<"Publishing history    :"<<publishing_history<<endl;
	cout<<"Related titles    :"<<related_titles<<endl;
	cout<<"Series    :"<<series<<endl;
	cout<<"Other forms of title    :"<<other_form_title<<endl;
	cout<<"Govt doc number    :"<< govt_doc_num<<endl;


}

bool Periodic::compare_other(const string& ss)
{
	if (string::npos != notes.find(ss)
			|| string::npos != series.find(ss)
			|| string::npos != related_titles.find(ss)
			|| string::npos != description.find(ss))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

