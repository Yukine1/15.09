#pragma once
class Book
{
	char* name;
	char* author;
	char* genre;
public:
	Book();
	Book(const char* name, const char* author, const char* genre);
	Book(const Book& b);
	~Book();
	void Print();
	void SetNameBook();
	void SetAuthorBook();
	void SetGenreBook();
	const char* GetNameBook();
	const char* GetAuthorBook();
	const char* GetGenreBook();
};

