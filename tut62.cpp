#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
ofstream out;
out.open("sample.txt");
out<<"This is my file\n";
out<<"This file is made for fun\n";
out<<"thank you\n";
out.close();

ifstream in;
string st;
in.open("sample.txt");
while(in.eof()==0){
    getline(in ,st);
    cout<<st<<endl;
}
return 0;
}