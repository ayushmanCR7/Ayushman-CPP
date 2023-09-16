#include <iostream>
using namespace std;


int main()
{
    //int num1, num2;
    //cout<<"enter the value of num 1:\n";
    //cin>>num1;
    //cout<<"enter the value of num 2:\n";
    //cin>>num2;
    //cout<<"the sum is "<<num1+num2;
    float d = 34.6;
    long double e = 34.6;
    
    cout<<"the value of d:"<<d<<endl<<"the value of e:"<<e;
    cout<<"the size of 34.6f :"<<sizeof(34.6F)<<endl;
    cout<<"the size of 34.6f :"<<sizeof(34.6l)<<endl;
    cout<<"the size of 34.6f :"<<sizeof(34.6L)<<endl;
    cout<<"the size of 34.6f :"<<sizeof(34.6f)<<endl;

    float a = 467.456;
    float b = 46.567;
    cout<<"the value of a+b:"<<a+b<<endl;
    cout<<"the value of is :"<<a+int(b)<<endl;
    
    
    return 0;
}


