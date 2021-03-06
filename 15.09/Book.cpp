#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(const char* name, const char* author, const char* genre)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->author = new char[strlen(author) + 1];
	strcpy_s(this->author, strlen(author) + 1, author);

	this->genre = new char[strlen(genre) + 1];
	strcpy_s(this->genre, strlen(genre) + 1, genre);
}

Book::Book(const Book& b)
{
	this->name = new char[strlen(b.name) + 1];
	strcpy_s(this->name, strlen(b.name) + 1, b.name);

	this->author = new char[strlen(b.author) + 1];
	strcpy_s(this->author, strlen(b.author) + 1, b.author);

	this->genre = new char[strlen(b.genre) + 1];
	strcpy_s(this->genre, strlen(b.genre) + 1, b.genre);
}

Book::~Book()
{
	delete[]this->name;
	this->name = nullptr;

	delete[]this->author;
	this->author = nullptr;

	delete[]this->genre;
	this->genre = nullptr;
}

void Book::Print()const
{
	cout << "Name of book: " << name << endl;
	cout << "Author: " << author << endl;
	cout << "Genre: " << genre << endl;
}

void Book::SetNameBook(char* name)
{
	if (this->name != nullptr)
	{
		delete[]this->name;
		this->name = nullptr;
	}
	this->name = name;
}

void Book::SetAuthorBook(char* author)
{
	if (this->author != nullptr)
	{
		delete[]this->author;
		this->author = nullptr;
	}
	this->author = author;
}

void Book::SetGenreBook(char* genre)
{
	if (this->genre != nullptr)
	{
		delete[]this->genre;
		this->genre = nullptr;
	}
	this->genre = genre;
}

const char* Book::GetNameBook()
{
	return name;
}

const char* Book::GetAuthorBook()
{
	return author;
}

const char* Book::GetGenreBook()
{
	return genre;
}
