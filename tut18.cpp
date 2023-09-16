#include<iostream>
using namespace std;
//int factorial(int n){
    //if(n<=1){
      //  return 1;
    //}
    //return n*factorial(n-1);
int fib(int n){
    if(n<2){
    return 1;
    }
    return fib(n-2)+fib(n-1);


}


int main(){
    int a;
//cout<<"enter a number "<<endl;

cout<<"enter the term of which fibbonacci series"<<a<< "you wanna see"<<fib(a)<<endl;
cin>>a;
return 0;
}