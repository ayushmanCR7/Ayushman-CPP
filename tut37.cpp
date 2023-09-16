#include<iostream>
using namespace std;
class employe{
public:
    int id;
    float salary;
    employe(int inpid){
        id = inpid;
        salary=34;
        
    }
    employe(){}

};
class programmer:public employe{
    public:
        int language;
        programmer(int inpid){
            id = inpid;
            language=9;
        }
void getdata(){
    cout<<id<<endl;
}
};

int main(){
    employe harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skill(10);
    cout<<skill.language<<endl;
    cout<<skill.id<<endl;
    skill.getdata();

return 0;
}