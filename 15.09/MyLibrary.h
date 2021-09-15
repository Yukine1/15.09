#pragma once
#include "Book.h"
#include "Human.h"

class MyLibrary
{
	Book* CountOfBooks;
	Human* Visitors;
public:
	MyLibrary() = default;
	MyLibrary(Book* COB, Human* Vis);
	MyLibrary(const MyLibrary& obj);
	~MyLibrary();
	void Input();
	void Print()const;
	void SetCOB(Book* COB);
	void SetVis(Human* Vis);
	Book* GetCOB();
	Human* GetVis();

};

