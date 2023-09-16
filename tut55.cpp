#include<iostream>
using namespace std;
class base_class{ 
    public:
          int var1;
           void display(){
            cout<<"yhe value of base class object ="<<var1<<endl;
         }
};
class derived_class:public base_class{
    public:
          int var2;
          void display(){
        cout<<"display base class variable"<<var1<<endl;
        cout<<"display derived class variable"<<var2<<endl;
       }
};
int main(){
    
base_class *base_class_pointer;
base_class obj_base;
derived_class obj_derived;
base_class_pointer=&obj_derived;
base_class_pointer->var1=34;
base_class_pointer->display();
base_class_pointer->var1=3400;
base_class_pointer->display();
derived_class *derived_class_pointer;
derived_class_pointer= &obj_derived;
derived_class_pointer->var1=234;
derived_class_pointer->var2=23566;
derived_class_pointer->display();
derived_class_pointer->display();


return 0;
}