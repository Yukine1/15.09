#include "Human.h"
#include <iostream>
#include <ctime>
using namespace std;

Human::Human(const char* Fname, const char* Sname, bool OnHands)//constructor with param
{
	srand(time(0));
	this->Fname = new char[strlen(Fname) + 1];
	strcpy_s(this->Fname, strlen(Fname) + 1, Fname);

	this->Sname = new char[strlen(Fname) + 1];
	strcpy_s(this->Sname, strlen(Fname) + 1, Fname);

	this->IdHuman = new char[10];
	for (size_t i = 0; i < 9; i++)
	{
		this->IdHuman[i] = rand() % 47 + 57;
	}
	this->OnHands = OnHands;
}

Human::~Human()//destructor
{
	delete[]this->Fname;
	this->Fname = nullptr;

	delete[]this->Sname;
	this->Sname = nullptr;
}

Human::Human(const Human& vis)//copying constructor
{
	this->Fname = new char[strlen(vis.Fname) + 1];
	strcpy_s(this->Fname,strlen(vis.Fname),vis.Fname);

	this->Sname = new char[strlen(vis.Sname) + 1];
	strcpy_s(this->Sname, strlen(vis.Sname), vis.Sname);

	this->OnHands = vis.OnHands;

	this->IdHuman = vis.IdHuman;
}

void Human::Print()const
{
	cout << "Firstname: " << Fname << endl;
	cout << "Surname: " << Sname << endl;
	if (OnHands == true)
		cout << "Book ON hands." << endl;
	else
		cout << "Book NOT on hands." << endl;
	cout << "Id human: " << IdHuman << endl;
}

void Human::SetFname(char* Fname)
{
	if (this->Fname != nullptr)
	{
		delete[]this->Fname;
		this->Fname = nullptr;
	}
	this->Fname = Fname;
}

void Human::SetSname(char* Sname)
{
	if (this->Sname != nullptr)
	{
		delete[]this->Sname;
		this->Sname = nullptr;
	}
	this->Sname = Sname;
}

void Human::SetHumanId(char* IdHuman)
{
	if (this->IdHuman != 0)
	{
		this->IdHuman = 0;
	}
	this->IdHuman = IdHuman;
}

const char* Human::GetFname()
{
	return Fname;
}

const char* Human::GetSname()
{
	return Sname;
}

const char* Human::GetHumanId()
{
	return IdHuman;
}

bool Human::GetOnHands()
{
	return OnHands;
}
