#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
}
int main(){
int size;
int ele;

cout<<"enter the size of the vector";
cin>>size;

vector<int> he;
for(int i=0;i<size;i++){
    cout<<"enter the elements of the vector";
    cin>>ele;
    he.push_back(ele);
}
display(he);
vector<int> ::iterator iter=he.begin();
he.insert(iter , 26);
//he.pop_back();
display(he);




return 0;
}