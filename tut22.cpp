#include<iostream>
#include<string>
#include<iostream>
using namespace std;

class binary{
        string s;
        public:
             void read(void);
             void chk_bin(void);
             void display(void);
             void ones_compliment(void);
    };

void binary :: read(void){
    cout<<"enter a binary number";
    cin>>s;
}    

void binary :: chk_bin(void){
    for(int i = 0; i<s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}


void binary::display(void)
{
    cout<<"displaying binaty number"<<endl;
    for(int i =0; i<s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary::ones_compliment(void){
    for(int i = 0; i<s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }

    }
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    

return 0;
}