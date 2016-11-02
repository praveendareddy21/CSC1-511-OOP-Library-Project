#ifndef MEDIA_H
#define MEDIA_H

#include <sstream>
#include <string>

using namespace std;
using std::ifstream;

class Media
{
protected:                         
	string call_number;
	string title;
	string subjects;
	string notes;

public:
    Media();
    Media(string, string, string, string);
    virtual ~Media();

	bool compare_title(const string& );
	bool compare_subjects(const string& );
	bool compare_call_number(const string& );
	virtual bool compare_other(const string& ) = 0;
	virtual void display() const = 0;
};


#endif
