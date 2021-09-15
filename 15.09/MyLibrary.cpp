#include "MyLibrary.h"
#include <iostream>

using namespace std;

MyLibrary::MyLibrary(Book* COB, Human* Vis):CountOfBooks(COB), Visitors(Vis)
{

}

MyLibrary::MyLibrary(const MyLibrary& obj)
{
}

MyLibrary::~MyLibrary()
{
}

void MyLibrary::Input()
{
}

void MyLibrary::Print() const
{
}

void MyLibrary::SetCOB(Book* COB)
{
}

void MyLibrary::SetVis(Human* Vis)
{
}

Book* MyLibrary::GetCOB()
{
	return nullptr;
}

Human* MyLibrary::GetVis()
{
	return nullptr;
}
