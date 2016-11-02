#include <sstream>
#include <string>
#include "Media.h"
#include<iostream>

using namespace std;


Media::Media()
{
}

Media::~Media()
{
    
}
Media::Media(string call_number1, string title1, string subjects1, string notes1)
{
    call_number = call_number1;
    title = title1;
    subjects = subjects1;
    notes = notes1;
}
bool Media::compare_title(const string& ss)
{
	int find_result= -1;
	find_result = title.find( ss );
	return (find_result>=0 ? true: false);
}

bool Media::compare_call_number(const string& ss)
{
	int find_result= -1;
	find_result = call_number.find( ss );
	return (find_result>=0 ? true: false);
}

bool Media::compare_subjects(const string& ss)
{
	int find_result= -1;
	find_result = subjects.find( ss );
	return (find_result>=0 ? true: false);
}

void Media::display() const
{
	cout <<"Call Number  : "<<call_number<<endl;
	cout <<"Titles   :"<<title<<endl;
	cout << "Subjects  :" <<subjects<<endl;
	cout<<"Notes    :"<< notes <<endl;
}
