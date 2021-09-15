#pragma once
class Book
{
	char* name;
	char* author;
	char* genre;
public:
	Book() = default;
	Book(const char* name, const char* author, const char* genre);
	Book(const Book& b);
	~Book();
	void Print()const;
	void SetNameBook(char* name);
	void SetAuthorBook(char* author);
	void SetGenreBook(char* genre);
	const char* GetNameBook();
	const char* GetAuthorBook();
	const char* GetGenreBook();
};

