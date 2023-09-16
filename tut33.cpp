#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int year;
    float interestrate;
    float returnvalue;
    public:
        bankdeposit(){};
        bankdeposit(int p, int y, float r);
        bankdeposit(int p, int y, int r);
        void show();

};
bankdeposit::bankdeposit(int p, int y, float r){
    principal = p;
    year = y;
    interestrate=r;
    returnvalue=principal;
    for(int i =0; i<y;i++){
        returnvalue=returnvalue*(i+interestrate);
    }
}
bankdeposit::bankdeposit(int p, int y, int r){
    principal = p;
    year = y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for(int i =0; i<y;i++){
        returnvalue=returnvalue*(i+interestrate);
    }
}
void bankdeposit::show(){
    cout<<endl<<principal<<year<<returnvalue<<endl;
}
int main(){
    int p,y;
    float r;
    int R;
    bankdeposit a, b, c;
    cout<<"enter the value"<<endl;
    cin>>p>>y>>r;
   a= bankdeposit(p,y,r);
    a.show();
    cout<<"enter the value"<<endl;
    cin>>p>>y>>R;
   b= bankdeposit(p,y,R);
    b.show();
    return 0;

}