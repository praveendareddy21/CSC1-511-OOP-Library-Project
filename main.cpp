//Praveen Dareddy

#include "SearchEngine.h"

using namespace std;

void display_Results(vector<Media*> list);
void processCommand();


void processCommand()
{
	SearchEngine se;

	string input_string;
	string command;
	string yesNoCommand="Yes";

	while(yesNoCommand=="Yes" || yesNoCommand=="yes" )
	{

		cout<<"Enter the option for search:"<<"\n"<<"1. Title"<<"\n"<<"2. Number"<<"\n"<<"3. Subjects"<<"\n"<<"4. Other"<<endl;
		cin>> command;


		if (command == "Title" || command=="1")
		{
			cout<< "Enter the title to be searched"<<endl;
			cin>>input_string;
			vector<Media*> list = se.search_by_title(input_string);
			display_Results(list);
		}
		else if (command == "Number" || command=="2")
		{
			cout<< "Enter the Call Number to be searched"<<endl;
			cin>>input_string;
			vector<Media*> list = se.search_by_call_number(input_string);
			display_Results(list);
		}
		else if (command == "Subjects" || command=="3")
		{
			cout<< "Enter the Subjects to be searched"<<endl;
			cin>>input_string;
			vector<Media*> list = se.search_by_subjects(input_string);
			display_Results(list);
		}
		else if (command == "Other" || command=="4")
		{
			cout<<"Enter data to be searched in Others"<<endl;
			cin>>input_string;
			vector<Media*> list = se.search_by_others(input_string);
			display_Results(list);
		}

		cout<<"Do you wish to continue?  Enter 'yes' / 'no'"<<endl;
		cin>>yesNoCommand;

	}

	return;
}



void display_Results(vector<Media*> list )
{
	for (unsigned i = 0 ; i < list.size();i++)
	{
		list[i]->display();
	}
}

//main driver funtion
int main()
{
	processCommand();
	return 0;
}



