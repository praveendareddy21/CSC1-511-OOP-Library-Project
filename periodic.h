#ifndef PERIODIC_H
#define PERIODIC_H



#include "Media.h"



class Periodic : public Media
{
private:
	
	string author;
	string description;
	string publisher;
	string publishing_history;
	string series;
	string related_titles;
	string other_form_title;
	string govt_doc_num;//govt_doc_num
	
	



public:
	Periodic (string ,string ,	string , string  ,
	string , string  , string  , string , 
	string , string, string , string );

	void display() const;
	bool compare_other(const string& ss);

	//void main1();

};

#endif
