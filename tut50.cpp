#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int i,int j){
        a=i;
        b=j;
    }
    void getdata(){
        cout<<a;
        cout<<b;
    }
};
int main(){
    complex *obj=new complex;
    //(*obj).setdata(2,3);
    //(*obj).getdata();

    obj->setdata(3,4);
    obj->getdata();

return 0;
}