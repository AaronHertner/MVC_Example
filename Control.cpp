//
// Created by Aaron Hertner on 4/18/2019.
//
#include <iostream>
#include <string>
#include "View.cpp"
#include "Book.cpp"
#include "BookShelf.cpp"

using namespace std;

class Control{
public:
    void launch(){
        int         numBS = 0;
        BookShelf*  arr[10];
        while(1){
            int choice; //variable for user selection
            choice = view.getChoice();

            //user wants to add a new bookshelf
            if(choice == 1){
                BookShelf *bf = new BookShelf(10);
                arr[numBS] = bf;
                numBS++;
                view.printNotice(1);
                continue;
            }

            //user wants to add a book
            else if(choice == 2){
                string title, author;
                int date, length;
                view.getBook(title, author, date, length);
                arr[numBS] += new Book(title, author, date, length));

                view.printNotice(2);
                continue;
            }

            else if(choice == 3){
                for(int i = 0; i < numBS; ++i){
                    arr[i] -> printAll();
                }
                break;
            }
        }
    }

private:
    View view;
};
