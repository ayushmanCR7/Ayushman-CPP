#include <iostream>
using namespace std;
class employe
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "the id of this emplye" << id << count;
    }
};
int employe::count = 1000;
int main()
{
    employe me, roshan, loda;
    me.setdata();
    me.getdata();

    roshan.setdata();
    roshan.getdata();

    loda.setdata();
    loda.getdata();

    return 0;
}