#include<iostream>
using namespace std;

template<class T1,class T2>
T1 average(T1 a,T2 b){
   T1 avg=(a+b)/2;
    return avg;
}
template<class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;

}
int main(){
    int a;
    a=average(423.87,425);
    std::cout<<a;
    int x=5;
    int y=7;
    swapp(x,y);
    std::cout<<x<<y;


return 0;
}