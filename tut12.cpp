#include<iostream>
using namespace std;
int main(){
int a=3;
int* b = &a;
cout<<"the adress of a is"<<b;
int**c = &b;
cout<<&b<<endl;
cout<<**c<<endl;
cout<<*c<<endl;
return 0;
}