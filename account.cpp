#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Account
{
private:
    string accountNumber;
    double balance;
    string Ownername;
    const double min = 100.000;

public:
    void dienthongtin()
    {
        cout << "Nhập tên chủ sở hữu: " << endl;
        cin >> Ownername;
        cout << "Nhập stk:" << endl;
        cin >> accountNumber;
        cout << "Nạp tiền vào tk:" << endl;
        cin >> balance;
    }

    void naptien(double e)
    {
        balance += e;
        cout << "Số tiền đã nạp vào: " << balance << endl;
    }

    void ruttien(double w)
    {
        if (balance - w < min)
            cout << "Số dư không đủ!" << endl;
        else
        {
            balance -= w;
            cout << "Đã rút: " << w << endl;
        }
    }

    void accountBalance()
    {
        cout << "Chủ tài khoản: " << Ownername << endl;
        cout << "STK: " << accountNumber << endl;
        cout << "Số tiền hiện tại là: " << balance << endl;
    }
};

int main()
{
    Account a1;
    a1.dienthongtin();
    a1.naptien(500);
    a1.accountBalance();
    a1.ruttien(2000);
    a1.ruttien(500);
    a1.accountBalance();
}
