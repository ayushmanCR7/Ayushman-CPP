#include<iostream>
#include<fstream>
using namespace std;
int main(){
    /* string s;
     s="harry";
      
      ofstream pin("sample.txt");
      pin<<s;
      return 0;*/
      string s;
      ifstream in("sampleb.txt");
      in>>s;
      cout<<s;
return 0;
}