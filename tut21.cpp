#include<iostream>
using namespace std;
class employee
{
    private:
        int a, b, c;
    public:
        int d,e;
        void setData(int a1, int b1, int c1);
        void getdata(){
            cout<<"the vale of a is "<<a<<endl;
            cout<<"the vale of b is "<<b<<endl;
            cout<<"the vale of c is "<<c<<endl;
            cout<<"the vale of d is "<<d<<endl;
            cout<<"the vale of e is "<<e<<endl;
        }    

};

void employee::setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}


int main(){
    employee harry;
    harry.d = 32;
    harry.e = 23;
    harry.setData(1,2,4);
    harry.getdata();


return 0;
}



