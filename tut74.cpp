#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,345,66,7,889,654,4};
    sort(arr, arr+5);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
    sort(arr,arr+7,greater<int>());
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}