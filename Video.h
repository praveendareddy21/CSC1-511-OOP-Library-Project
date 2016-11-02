#ifndef VIDEO_H
#define VIDEO_H

#include "Media.h"

class Video : public Media
{
private:
	
	string description;
	string distributor;
	string label;
	string series;

public:
	Video (string ,string ,	string , string  ,
	string , string  , string  , string );
	void display() const;
	bool compare_other(const string& ss);

};
#endif
