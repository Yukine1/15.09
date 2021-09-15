#pragma once
class Human
{
	char* Fname;
	char* Sname;
	char* IdHuman;
	bool OnHands;
public:
	Human() = default;//constructors
	Human(const char* Fname, const char* Sname, bool OnHands);
	~Human();//destructor
	Human(const Human& vis);
	void Print()const;//show info
	void SetFname(char* Fname);//set firstname
	void SetSname(char* Sname);// set surname
	void SetHumanId(char* IdHuman);//set human id
	void SetOnHands(bool OnHands);
	const char* GetFname();//get firstname
	const char* GetSname();//get surname
	const char* GetHumanId();//get human id
	bool GetOnHands();
};

