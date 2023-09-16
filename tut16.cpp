#include<iostream>
using namespace std;
void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}


int main(){
   int x=4;
   int y=5;
   
   swappointer(&x,&y);
   cout<<x<<y<<endl;
    

return 0;
}