#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void setdata(int a , float b){
            id =a;
            price=b;
        }
        void getdata(void){
            cout<<"the id of the item"<<id<<endl;
            cout<<"the price of the item"<<price<<endl;
        }
};
int main(){
    int size=3;
    shop *obj=new shop[size];
    shop *objtemp=obj;
    int p,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"enter the id and price of"<<i+1<<endl;
        cin>>p>>q;
        obj->setdata(p,q);
        obj++;
    }
    for(i=0;i<size;i++){
        cout<<"enter the price"<<i+1<<endl;
        objtemp->getdata();
        objtemp++;
    }



return 0;
}