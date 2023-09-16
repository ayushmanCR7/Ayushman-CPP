#include <iostream>
using namespace std;
class y;
class x
{
    int data;
    friend class y;
    friend void sum(x,y);
public:
    void setvalue(int value)
    {
        data = value;
    }
};
class y
{
    int num;
    friend class x;
    friend void sum(x,y);

public:
    void getvalue(int value)
    {
        num = value;
    }
};
void sum(x o1, y o2)
{

    cout<<o1.data + o2.num;
}
int main()
{
x o1;
y o2;
o1.setvalue(3);
o2.getvalue(6);

sum(o1,o2);

    return 0;
}

