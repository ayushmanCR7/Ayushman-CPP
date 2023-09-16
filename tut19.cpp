#include<iostream>
using namespace std;
float volume(double r, float h){
    return(3.14*r*r*h);
}

int main(){
    double r;
    float h;
    cout<<"enter the value of radius "<<r<<endl;
    cin>>r;
    cout<<"enter the value of height "<<h<<endl;
    cin>>h;
    cout<<"the vloume of the cylinder is "<<volume(r,h)<<endl;

return 0;
}