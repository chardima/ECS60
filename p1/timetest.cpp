// Michelle Tang
// 912026295
// Driver program that asks for a filename and repeatedly asks the user for the ADT to which he/she wishes to apply the ammands from the specified file.

#include<iostream>
#include<fstream>
#include"vector.h"
#include"LinkedList.h"
#include"dsexceptions.h"
#include"StackAr.h"
#include"CursorList.h"
#include"QueueAr.h"
#include"StackLi.h"
#include"SkipList.h"

using namespace std;

vector<CursorNode <int> cursorSpace(500000);

int getChoice(void)
{
	int i;
	cout << "      ADT Menu" << endl;
	cout << "0. Quit" << endl;
	cout << "1. LinkedList" << endl;
	cout << "2. CursorList" << endl;
	cout << "3. StackAr" << endl;
	cout << "4. StackLi" << endl;
	cout << "5. QueueAr" << endl;
	cout << "6. SkipList" << endl;
	cin >> i;	

	return i;
}

void RunList(char * filename)
{
	char command;
	int num;
	ifstream read(filename);
	while (read >> command >> num)
	{
		if (command = 'i')
		{

		}
		if (command = 'd')
		{
			
		}
	}	
}

void RunCursorList(char * filename)
{
	char command;
	int num;
	ifstream read(filename);
	while (read >> command >> num)
	{
		if (command = 'i')
		{
			
		}
		if (command = 'd')
		{
			
		}
	}	
}

void RunStackAr(char * filename)
{
	char command;
	int num;
	ifstream read(filename);
	while (read >> command >> num)
	{
		if (command = 'i')
		{
		
		}
		if (command = 'd')
		{
			
		}
	}	
}

void RunStackLi(char * filename)
{
	char command;
	int num;
	ifstream read(filename);	
	while (read >> command >> num)
	{
		if (command = 'i')
		{

		}
		if (command = 'd')
		{
	
		}	
	}
}

void RunQueueAr(char * filename)
{
	char command;
	int num;
	ifstream read(filename);	
	while (read >> command >> num)
	{
		if (command = 'i')
		{

		}
		if (command = 'd')
		{
			
		}
	}
}

void RunSkipList(char * filename)
{
	char command;
	int num;
	ifstream read(filename);
	while (read >> command >> num);
	{
		if (command = 'i')
		{

		}
		if (command = 'd')
		{

		}
	}	
}

int main()
{
	char argv[1];	
	cout << "Filename >> ";
	cin >> argv[1];
	
	do
	{
		CPUTime ct;
		choice = getChoice();
		ct.reset();
		switch (choice)
		{
			case 1: RunList(argv[1]); break;
			case 2: RunCursorList(argv[1]); break;
			case 3:	RunStackAr(argv[1]); break;
			case 4:	RunStackLi(argv[1]); break;
			case 5:	RunQueueAr(argv[1]); break;
			case 6:	RunSkipList(argv[1]); break;
		}

		cout << "CPU time: " << ct.cur_CPUTime() << endl;
	}	

} 


