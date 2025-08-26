#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string Brand;
    int Year;

public:
    Car(string b, int y)
    {
        Brand = b;
        Year = y;
    }
    void displayInfo()
    {
        cout << "Brand: " << Brand << endl;
        cout << "Year: " << Year << endl;
    }
};

int main()
{
    Car car1("Toyota", 2020);
    Car car2("Vinfast", 2025);
    car1.displayInfo();
    car2.displayInfo();

}
