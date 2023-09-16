#include<iostream>
using namespace std;
class y;
class x{
    int num;
    friend void swap(x &, y &);
    public:
        void setvalue(int value){
            num=value;
        }
        void display(void){
            cout<<num<<endl;
        }
        
};
class y{
    int ayu;
    friend void swap(x &,y &);
    public:
        void getvalue(int man){
            ayu=man;
        }
        void display(void){
            cout<<ayu<<endl;
        }
};
void swap(x &o1, y &o2){
    int temp=o1.num;
    o1.num=o2.ayu;
    o2.ayu=temp;

}


int main(){
x o1;
y o2;
o1.setvalue(45);
o2.getvalue(90);
swap(o1,o2);
o1.display();
o2.display();
return 0;
}