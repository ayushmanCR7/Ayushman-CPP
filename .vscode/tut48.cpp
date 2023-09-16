#include<iostream>
using namespace std;
class base1{
int data1;
public:
    base1(int i){
        data1=i;
        cout<<"the base1 constructor is called "<<endl;
    }
    void printdata1(void){
        cout<<"the value of data1 is"<<data1<<endl;
    }
};
class base2{
int data2;
public:
    base2(int i){
        data2=i;
        cout<<"the base2 constructor is called "<<endl;
    }
    void printdata2(void){
        cout<<"the value of data2 is"<<data2<<endl;
    }
};
class derived:public base1,public base2{
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d):base2(b),base1(a){
                 derived1=c;
                 derived2=d;
                 cout<<"the derived class construcor is called"<<endl;
        }
};
int main(){
    derived harry(1,2,3,4);
     

return 0;
}