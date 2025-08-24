#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Course
{
private:
public:
    string courseName;
    string courseCode;
    int credits;
    string instructorName;

    void displayInfo()
    {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor: " << instructorName << endl;
    }

    bool isHighCredit()
    {
        return credits > 3;
    }

    // Mở rộng
    bool checkLab()
    {
        return credits > 4;
    }
};

int main()
{
    Course course1;
    course1.courseName = "Object Oriented Programming";
    course1.courseCode = "CS202";
    course1.credits = 4;
    course1.displayInfo();

    if (course1.isHighCredit())
    {
        cout << "This is a high credit course." << endl;
    }
    else
    {
        cout << "This is not a high credit course." << endl;
    }
    
    if (course1.checkLab())
    {
        cout << "Không yêu cầu sử dụng lab" << endl;
    }
    else
    {
        cout << "Có sử dụng lab" << endl;
    }
}
