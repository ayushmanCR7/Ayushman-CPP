#include<iostream>
#include<map>

using namespace std;
int main(){
map<string,int> marks;
marks["aryan"]=34;
marks["arya"]=44;
marks["ary"]=54;
marks["ar"]=64;
marks["a"]=74;
marks.insert({{"rohan",45},{"rahul",56}});

map<string, int> ::iterator iter;
for(iter=marks.begin();iter!=marks.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
}

return 0;
}
