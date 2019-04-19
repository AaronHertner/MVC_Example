//
// Created by Aaron Hertner on 4/18/2019.
//

#include <iostream>
#include <string>
#include "Book.cpp"

class BookShelf{
    public:
        BookShelf(int n){
            capacity = n;
            numBooks = 0;
        }

        void printAll(){
            for(int i = 0; i < numBooks; ++i){
                arr[i] -> print();
            }
        }
        //overloaded += operator for adding books to the shelf
        void operator +=(Book* book){
            if(numBooks < capacity) {
                arr[numBooks] = book;
                numBooks++;
            }
        }
    private:
        int capacity;
        int numBooks;
        Book* arr[];
};
