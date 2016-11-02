#ifndef BOOKS_H
#define BOOKS_H

#include "Media.h"


class Book : public Media
{
private:
	
	string author;
	string description;
	string publisher;
	string city;
	string year;
	string series;

public:
	Book (string ,string ,	string , string  ,
	string , string  , string  , string , 
	string , string );

	void display() const;
	bool compare_other(const string& );
};

#endif
