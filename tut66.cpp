#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class ayu
{
public:
    T1  a;
    T2  b;
    T3  c;
    ayu(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};
int main()
{
    ayu<> fan(23, 444.565, 'g');
    fan.display();
    ayu<float, char, int> obj(4.45, 'f', 4);
    obj.display();
    return 0;
}