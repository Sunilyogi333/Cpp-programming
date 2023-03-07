/*A bookshop sells both books and videotapes. Create an abstract class called media have
title and price of publication. Derive two clases from the class media containing number of
pages in a book and another for storing playing time of a tape. Each class has a function display()
and also uses constructors. Write a complete program for above program implementation.*/
#include <iostream>
#include <string.h>
using namespace std;
class Media
{
protected:
    char title[100];
    int price;

public:
    Media(const char *t, int p)
    {
        strcpy(title, t);
        price = p;
    }
    virtual void display() = 0;
};
class Book : public Media
{
protected:
    int pages;

public:
    Book(const char *t, int p, int pg) : Media(t, p)
    {
        pages = pg;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Number of Pages: " << pages << endl;
    }
};
class Tape : public Media
{
protected:
    int time;

public:
    Tape(const char *t, int p, int tm) : Media(t, p)
    {
        time = tm;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Playing time: " << time << "hours" << endl;
    }
};
int main()
{
    Media *B, *T;
    B = new Book("Rich dad Poor Dad", 450, 500);
    T = new Tape("Intelligent Investor", 700, 5);
    B->display();
    T->display();
    return 0;
}