#include<iostream>
using namespace std;
class complex{
    int a ,b;
    public:
        void setdata(int n, int m){
            a=n;
            b=m;
        }
        friend complex sumcomplex(complex o1,complex o2);
        void getdata(){
            cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
        }



};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setdata(1,4);
    c2.setdata(2,5);

    c1.getdata();
    c2.getdata();

sum=sumcomplex(c1,c2);
sum.getdata();

     

    

return 0;
}