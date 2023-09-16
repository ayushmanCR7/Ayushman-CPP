#include<iostream>
#include<list>
using namespace std;
void display(list<int> lst){
    list<int> ::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<endl;
        
    }
}

int main(){
list<int> lst;
lst.push_back(9);
lst.push_back(2);
lst.push_back(3);
lst.push_back(4);
display(lst);
int n;
int x;
cout<<"enter the size of the lsit";
cin>>n;
list<int> list3(n);
list<int> ::iterator itr;
itr=list3.begin();
*itr = 23;
itr++;
*itr = 33;
itr++;
*itr = 43;
itr++;
lst.merge(list3);
display(lst);






return 0;
}