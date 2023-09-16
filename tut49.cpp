#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //int *obj=&n;
    //cout<<*(obj);
    int *obj=new int(80);
    cout<<*(obj);


return 0;
}