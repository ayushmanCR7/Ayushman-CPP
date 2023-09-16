#include<iostream>
using namespace std;
int main(){
 int marks[] = {342,464 ,4567};
 for (int i = 0; i < 5; i++)
 {
    cout<<"the mARKS ARE"<<marks[i]<<endl;
 }
 int* p = marks;
 cout<<"the value of [0]"<<*p;
 cout<<"the value of [1]"<<*(p+1);
 cout<<"the value of [2]"<<*(p+2);
 cout<<"the value of [3]"<<*(p+3);
 
return 0;
}