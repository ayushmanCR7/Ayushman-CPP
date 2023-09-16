#include<iostream>
using namespace std;
template<class T1, class T2>
class my{
    public:
      T1 daat1;
      T2 data2;

      my(T1 a, T2 b){
        daat1=a;
        data2=b;
      }
      void dispaly(void){
        cout<<this->daat1<<endl<<this->data2;
      }

};
int main(){
my<int,float> obj(2,6.8);
obj.dispaly();

return 0;
}