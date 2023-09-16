#include<iostream>
using namespace std;
void func(int a){
    std::cout<<"i am first one"<<a;
}
template <class T>
T func(T a){
cout<<"second"<<a;
}
int main(){
func(6.6);
return 0;
}