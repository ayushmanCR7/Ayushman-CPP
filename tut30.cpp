#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(void);
        void printnumber()
        {cout<<a<<"+"<<b<<"i";}


};

complex::complex(void){
    a=0;
    b=0;
    
}

int main(){

return 0;
}