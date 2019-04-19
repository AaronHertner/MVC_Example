//
// Created by Aaron Hertner on 4/18/2019.
//
#ifndef BOOK_CPP
#define BOOK_CPP

#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
        Book(string title, string author, int date, int length){
            this->title = title;
            this->author = author;
            this->pDate = date;
            this->length = length;
        }
        //simple function for printing the contents of the book
        void print(){
            cout << "Title:  " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Date:   " << pDate << endl;
            cout << "Pages:  " << length << endl;
        }

        //getters
        int getDate(){return this->pDate;}
        string getTitle(){return this->title;}

    private:
        string title;
        string author;
        int pDate;
        int length;
};

#endif