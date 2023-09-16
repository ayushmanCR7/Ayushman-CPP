#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void setrollnumber(int);
    void getrollnumber(void);
};
void student::setrollnumber(int r)
{
    roll_number = r;
}
void student::getrollnumber()
{
    cout << "the roll number is" << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void getmarks(void)
    {
        cout << "the marks in maths are " << maths << endl;
        cout << "the marks in physics are " << physics << endl;
    }
};
class result : public exam
{
    float percentage;

public:
    void process()
    {
        cout << "the percentage obtained is  " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result ayushman;
    ayushman.setrollnumber(10);
    ayushman.getrollnumber();
    ayushman.setmarks(99, 99);
    ayushman.getmarks();
    ayushman.process();

    return 0;
}