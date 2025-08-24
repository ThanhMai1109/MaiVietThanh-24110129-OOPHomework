#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string tiltle;
    string author;

public:
    Book(string t, string a)
    {
        tiltle = t;
        author = a;
    }
    void displayInfo()
    {
        cout << "Tiltle: " << tiltle << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book book1("C++ Programming", "Bjarne Stroustrup");
    book1.displayInfo();
}