#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
ofstream out;

out.open("sample.txt");
string name;
cout<<"enter name";
cin>>name;
out<<name;
out.close();
ifstream in;
in.open("sample.txt");
string ifh;
in>>ifh;
cout<<ifh;
in.close();
return 0;
}
