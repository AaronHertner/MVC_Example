//
// Created by Aaron Hertner on 4/18/2019.
//

#include <iostream>
#include <string>
#include "Book.cpp"

using namespace std;

class View{
    public:
        int getChoice(){
            int choice;
            printMenu();
            cout << "Please Make a Selection [1,2,3]:   ";
            cin >> choice;
            return choice;
        }

        void getBook(string &t, string &a, int &d, int &l){
            cout << "Title:  " << endl;
            cin >> t;
            cout << "Author: " << endl;
            cin >> a;
            cout << "Date:   " << endl;
            cin >> d;
            cout << "Length: " << endl;
            cin >> l;
        }

        void printMenu(){
            cout << "1. New BookShelf" << endl;
            cout << "2. New Books" << endl;
            cout << "3. Exit" << endl;
        }

        void printNotice(int i){
            if(i == 1){
                cout << "New BookShelf Added!" << endl;
            }

            if(i == 2){
                cout << "New Book Added!" << endl;
            }
        }

};