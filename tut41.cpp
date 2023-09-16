#include<iostream>
using namespace std;
class base1{
    protected:
           int base1int;
     public:
           void setbase1(int q){
            base1int=q;
           }

};
class base2{
    protected:
           int base2int;
      public:
           void setbase2(int q){
            base2int=q;
           }

};
class base3{
    protected:
           int base3int;
       public:   
            void setbase3(int q){
            base3int=q;
           }

};
class derived:public base1,public base2,public base3{
public:
    void show(){
        cout<<"the value of base1int= "<<base1int<<endl;
        cout<<"the value of base2int= "<<base2int<<endl;
        cout<<"the value of base3int= "<<base3int<<endl;
        cout<<"the sum of all = "<<base3int+base2int+base1int<<endl;
    }
};
int main(){
    derived ayushman;
    ayushman.setbase1(90);
    ayushman.setbase2(340);
    ayushman.setbase3(934);
    ayushman.show();
    

    



return 0;
}