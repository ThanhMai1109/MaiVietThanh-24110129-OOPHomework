#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Circle
{
private:
public:
    double radius;
    double circumference()
    {
        return 2 * M_PI * radius;
    }
    double area()
    {
        return M_PI * radius * radius;
    }
    void tinh()
    {
        cout << "Chu vi hình tròn " << circumference() << " đơn vị" << endl;
        cout << "Diện tích hình tròn " << area() << " đơn vị vuông" << endl;
    }

    // Mở rộng
    void checkRadius(double r)
    {
        if (r > 0)
            cout << "Bán kính hợp lệ" << endl;
        else
            cout << "Bán kính không hợp lệ" << endl;
    }

    string color;
    void xuatmau()
    {
        cout << "Màu của hình tròn là: " << color << endl;
    }
};

int main()
{
    Circle c1;
    cout << "Nhap bán kính hình tròn: " << endl;
    cin >> c1.radius;
    cout << "Nhập màu của hình tròn: " << endl;
    cin >> c1.color;
    c1.tinh();
    c1.xuatmau();
}
