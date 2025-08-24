#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Person
{
private:
public:
    string name;
    int age;
    string address;

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }

    bool isAdult()
    {
        return age >= 18;
    }

    // Mở rộng
    void move(string newAddress)
    {
        address = newAddress;
        cout << "Đã chuyển đến: " << newAddress << endl;
    }

    void greet()
    {
        cout << "Hello, my name is " << name;
    }
};

int main()
{
    Person person1;
    person1.name = "John Doe";
    person1.age = 20;
    person1.address = "123 Main St";

    person1.displayInfo();

    if (person1.isAdult())
    {
        cout << "This person is an adult." << endl;
    }
    else
    {
        cout << "This person is not an adult." << endl;
    }
    person1.move("1st Vo Van Ngan St");
    person1.greet();
}
