#include<iostream>
using namespace std;
class simple{
    int data1,data2;
    public:
         simple(int a, int b){
            data1=a;
            data2=b;
         }
         void display(){
            cout<<data1<<data2<<endl;
         }
};

int main(){
simple p(1,4);
p.display();
return 0;
}