#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"enter your age"<<endl;
    cin>>age;
    //if(age<18){
      //  cout<<"you cannot come to party"<<endl;
    //}
   // else if(age==18){
       // cout<<"you are only eligible with a senior"<<endl;
    //}/
    //else{
        //cout<<"you can come to party"<<endl;
    //}

switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
default:
    cout<<"no special cases"<<endl;
     break;
}



    return 0;
}