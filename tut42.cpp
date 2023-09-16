#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;
class simple_calculator
{
protected:
    float a;
    float b;

public:
    void setdata(float q, float p)
    {
        b = q;
        a = p;
    }
    float addition()
    {
        return a + b;
    }
    float subtraction()
    {
        return a - b;
    }
    float multiplication()
    {
        return a * b;
    }
    float division()
    {
        return a / b;
    }
};
class scientific_calculator
{
protected:
    float a;
    float b;

public:
    void setdata2(float q, float p)
    {
        b = p;
        a = q;
    }
    float pie()
    {
        return a * 3.14 * b;
    }
    float root()
    {
        return sqrt(a * b);
    }
    float log()
    {
        return logb(a);
    }
    float si()
    {
        return sin(a * b);
    }
};
class hybrid : public simple_calculator, public scientific_calculator
{
public:
    void display()
    {
        cout << "the addition is " << addition()<<endl;
        cout << "the subtraction is " << subtraction()<<endl;
        cout << "the multiplication is " << multiplication()<<endl;
        cout << "the division is " << division()<<endl;
        cout << "the pie is " << pie()<<endl;
        cout << "the log is " << log()<<endl;
        cout << "the sin is " << si()<<endl;
        cout << "the root is " << root()<<endl;
    }
};

int main()
{
    float a, b;
    hybrid num1;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
    num1.setdata(a, b);
    num1.display();

    return 0;
}