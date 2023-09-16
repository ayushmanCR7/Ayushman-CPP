#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter the value of number whose multiplication table you would like to see:"<<a<<endl;
cin>>a;
for(int i=1; i<11; i++)
{
cout<<a<<"*"<<i<<"="<<a*i<<endl;
}




    return 0;
}