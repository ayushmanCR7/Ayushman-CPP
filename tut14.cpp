#include<iostream>
using namespace std;

struct employee
{
    int eid;
    char favchar;
    float salary;
};

union money
{
    int rice;
    char car;
    float pound;

};

int main(){
    //struct employee harry;
    
    //arry.eid = 1;
    //harry.favchar = 'e';
    //harry.salary = 1233333345;

//cout<<harry.eid<<endl;
//cout<<harry.favchar<<endl;
//cout<<harry.salary<<endl;
union money harry;
harry.car = 'a';
harry.pound = 123.444;


cout<<harry.rice<<endl;





return 0;
}