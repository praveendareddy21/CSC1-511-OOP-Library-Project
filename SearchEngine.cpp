#include "SearchEngine.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>



using namespace std;

SearchEngine::SearchEngine()
{
    initialize_books();
	initialize_film();
	initialize_Video();
	initialize_Periodic();
	
}

SearchEngine::~SearchEngine()
{
	for (unsigned int i=0; i<CardCatalog.size();i++)
	{
		delete CardCatalog[i];
	}
}

void SearchEngine::initialize_books()
{
	
	ifstream inf ("book.txt");
	string call_num;
	string title;
	string subj;
	string au;
	string ds;
	string pb;
	string ct;
	string yr;
	string series;
	string notes;

    while (getline(inf, call_num, '|'))
	{
		getline(inf, title, '|');
		getline(inf, subj, '|');
		getline(inf, au, '|');
		getline(inf, ds, '|');
		getline(inf, pb, '|');
		getline(inf, ct, '|');
		getline(inf, yr, '|');
		getline(inf, series, '|');
		getline(inf, notes, '\n');

        Book* temp = new Book (call_num,title,subj,au,ds,pb,ct,yr,series,notes);
        CardCatalog.push_back(temp);
	}
	inf.close();
}

void SearchEngine::initialize_film()
{
	ifstream inf ("film.txt");
	string call_num;
	string title;
	string subj;
	string di;
	string notes;
	string yr;

	while (getline(inf, call_num, '|'))
	{
		getline(inf, title, '|');
		getline(inf, subj, '|');
		getline(inf, di, '|');
		getline(inf, notes, '|');
		getline(inf, yr, '\n');

		Film* temp = new Film (call_num,title,subj,di,notes,yr);
		CardCatalog.push_back(temp);
	}
	inf.close();
}


void SearchEngine::initialize_Periodic()
{
	ifstream inf ("periodic.txt");
	string call_num;
	string title;
	string subj;
	string au;
	string de;
	string pu;
	string ph;
	string sr;
	string notes;
	string rt;
	string ofti;
	string goNu;

	while (getline(inf, call_num, '|'))
	{
		getline(inf, title, '|');
		getline(inf, subj, '|');
		getline(inf, au, '|');
		getline(inf, de, '|');
		getline(inf, pu, '|');
		getline(inf, ph, '|');
		getline(inf, sr, '|');
		getline(inf, notes, '|');
		getline(inf, rt, '|');
		getline(inf, ofti, '|');
		getline(inf, goNu, '\n');

		Periodic* temp = new Periodic(call_num,title,subj,au,de,pu,ph,sr,notes,rt,ofti,goNu);
		CardCatalog.push_back(temp);
	}

	inf.close();
}

void SearchEngine::initialize_Video()
{
	ifstream inf("video.txt");
	string call_num;
	string title;
	string sb;
	string ds;
	string distrib;
	string notes;
	string sr;
	string la;

	while (getline(inf, call_num, '|'))
	{
		
		getline(inf, title, '|');
		getline(inf, sb, '|');
		getline(inf, ds, '|');
		getline(inf, distrib, '|');
		getline(inf, notes, '|');
		getline(inf, sr, '|');
		getline(inf, la, '\n');

		Video* temp = new Video(call_num,title,sb,ds,distrib,notes,sr,la);

		CardCatalog.push_back(temp);
	
	}
	inf.close();
}



vector<Media*> SearchEngine::search_by_title(const string& ss) const
{
	std::vector <Media*> results;
	for (unsigned int i=0; i < CardCatalog.size(); i++)
	{
		if (CardCatalog[i]->compare_title(ss))
		{
			results.push_back(CardCatalog[i]);
		}
	}
	return results;
}

vector<Media*> SearchEngine::search_by_call_number(const string& ss) const
{
	std::vector <Media*> results;
	for (unsigned int i=0; i < CardCatalog.size(); i++)
	{
		if (CardCatalog[i]->compare_call_number(ss))
		{
			results.push_back(CardCatalog[i]);  
		}
	}
	return results;
}

vector< Media*> SearchEngine::search_by_subjects(const string& ss) const
{
	std::vector <Media*> results;
	for (unsigned int i=0; i < CardCatalog.size(); i++)
	{
		if (CardCatalog[i]->compare_subjects(ss))
		{
			results.push_back(CardCatalog[i]);  
		}
	}
	return results;
}

vector< Media*> SearchEngine::search_by_others(const string& ss) const
{
	std::vector <Media*> results;
	for (unsigned int i=0 ; i < CardCatalog.size();i++)
	{
		if (CardCatalog[i]->compare_other(ss))
		{
			results.push_back(CardCatalog[i]);
		}
	}
	return results;
}
