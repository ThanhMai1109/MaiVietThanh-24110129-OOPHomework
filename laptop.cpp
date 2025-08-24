#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Laptop
{
private:
public:
    string brand;
    string model;
    int ram;
    int storage;
    string gpu;

    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    void checkRAM(int requiredRAM)
    {
        if (ram >= requiredRAM)
        {
            cout << "Ram đủ để chạy phần mềm" << endl;
        }
        else
        {
            cout << "Ram không đủ để chạy phần mềm" << endl;
        }
    }

    // Mở rộng`
    void checkGPU()
    {
        if (gpu == "GeForce RTX 3090 Ti")
        {
            cout << "Cấu hình đã của máy đã đạt" << endl;
        }
        else
        {
            cout << "Cấu hình của máy không đủ" << endl;
        }
    }

    void upRam(int r)
    {
        ram += r;
        cout << "Nâng cấp thành công" << r << "GB RAM" << endl;
    }
};

int main()
{
    Laptop laptop1;
    laptop1.brand = "Dell";
    laptop1.model = "XPS 13";
    laptop1.ram = 8;
    laptop1.storage = 256;
    laptop1.gpu = "GeForce RTX 2080 Ti";
    laptop1.displayInfo();
    // ểKim tra xem laptop có đủ RAM đểạ chy ầphn ềmm yêu ầcu 16GB RAM
    laptop1.checkRAM(16);
    laptop1.checkGPU();
    laptop1.upRam(8);
    laptop1.displayInfo();

    return 0;
}
