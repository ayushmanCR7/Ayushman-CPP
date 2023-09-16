#include<iostream>
using namespace std;

float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney*factor;
}
int main(){
    int money = 12345;
    cout<<moneyreceived(money)<<endl;

return 0;
}