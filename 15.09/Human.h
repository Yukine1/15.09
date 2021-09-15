#pragma once
class Human
{
	char* Fname;
	char* Sname;
	char* IdHuman;
	bool OnHands;
public:
	Human();//constructors
	Human(const char* Fname, const char* Sname, bool OnHands);
	~Human();//destructor
	Human(const Human& vis);
	void Print();//show info
	void SetFname();//set firstname
	void SetSname();// set surname
	void SetHumanId();//set human id
	const char* GetFname();//get firstname
	const char* GetSname();//get surname
	bool GetHumanId();//get human id
};

