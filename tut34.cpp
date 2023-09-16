#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(){
            a=0;
        
        }
        number(int num){
            a=num;
        }
        number(number &obj){
            cout<<"it is invoked"<<endl;
            a=obj.a;
    
        }
        void display(){
            cout<<a<<endl;
        }
};

int main(){
    number z(45);
    number z1(z);
    z1.display();

return 0;
}