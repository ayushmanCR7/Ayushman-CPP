// Online C++ compiler to run C++ program online
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int ans1=0;
    int i=0;
    while(n!=0){
        int digit=n&1;
        if(digit==1){
            digit=0;
        }
        else if(digit==0){
            digit=1;
        }
        ans=(digit*pow(10,i)) + ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    cin.ignore();
    int main = ans;
    int j=0;
    while(main!=0){
        int bit=main%10;
        if(bit==1){
            ans1=ans1 + pow(2,j);
        }
        n=n/10;
        j++;
        
    }
    std::cout<<ans1<<endl;
    return 0;
}
