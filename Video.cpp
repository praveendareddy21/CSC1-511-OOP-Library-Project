#include "Video.h"

#include <iostream>



Video::  Video (string call_number1,string title1,	string subjects1,
	string description1, string distributor1 , string notes1 ,
	string series1,string label1 )
	:Media(call_number1, title1,subjects1, notes1)
	,description(description1)
	,distributor(distributor1)
	,series(series1)
	,label(label1)
{

}

void Video::display() const
{
	cout<<"VIDEO"<<endl;
	Media::display();
	cout<<"Description     :"<<description<<endl;
	cout<<"Distributor    :"<<distributor<<endl;
	cout<<"Series   :"<<series<<endl;
	cout<<"Label    :"<<label<<endl;
}


bool Video::compare_other(const string& ss) 
{

	if (string::npos != description.find(ss)
			||string::npos != notes.find(ss)
			|| string::npos != distributor.find(ss))
	{
		return true;
	}
	else{
		return false;
	}
	
}



