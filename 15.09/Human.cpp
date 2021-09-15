#include "Human.h"
#include <iostream>
#include <ctime>
using namespace std;

Human::Human()//default constructor
{
	Fname = nullptr;
	Sname = nullptr;
	IdHuman = 0;
	OnHands = false;
}

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

void Human::Print()
{
	cout << "Firstname: " << Fname << endl;
	cout << "Surname: " << Sname << endl;
	if (OnHands == true)
		cout << "Book ON hands." << endl;
	else
		cout << "Book NOT on hands." << endl;
	cout << "Id human: " << IdHuman << endl;
}

void Human::SetFname()
{
	if (this->Fname != nullptr)
	{
		delete[]this->Fname;
		this->Fname = nullptr;
	}
	cout << "Enter your firstname: ";
	cin.getline(Fname,20);
	cin.ignore();
}

void Human::SetSname()
{
	if (this->Sname != nullptr)
	{
		delete[]this->Sname;
		this->Sname = nullptr;
	}
	cout << "Enter your surname: ";
	cin.getline(Sname, 20);
	cin.ignore();
}

void Human::SetHumanId()
{
	if (this->IdHuman != 0)
	{
		this->IdHuman = 0;
	}
	cout << "Enter your Id: ";
	cin >> IdHuman;
}

const char* Human::GetFname()
{
	return Fname;
}

const char* Human::GetSname()
{
	return Sname;
}

bool Human::GetHumanId()
{
	return IdHuman;
}
