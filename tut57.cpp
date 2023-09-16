#include<iostream>
using namespace std;
class cwh{
    protected:
       string title;
       float rating;
    public:
       cwh(string t , float r){
        title=t;
        rating=r;
       }
        void display(){};
};
class cwhvideo:public cwh{
    float videolength;
    public:
        cwhvideo(string t, float r, float vl):cwh(t,r){
            videolength=vl;
        }
        void display(){
            cout<<"the title of video is"<<title<<endl;
            cout<<"the rating of the video is "<<rating<<endl;
            cout<<"the video length is  "<<videolength<<endl;        }
};
class cwhtext:public cwh{
  int words;
  public:
      cwhtext(string t, float r,int wc):cwh(t,r){
        words=wc;
      }
      void display(){
            cout<<"the title of video is"<<title<<endl;
            cout<<"the rating of the video is "<<rating<<endl;
            cout<<"the word count is  "<<words<<endl;
      }
};


int main(){
    string title;
    int words;
    float rating;
    float videolength;
    title="best";
    rating=4.6;
    videolength=4.789;
    cwhvideo objvideo(title,rating,videolength);
    title="worst";
    words=32;
    rating=6.4;
    cwhtext objtext(title,rating,words);
    cwh *tuts[2];
    tuts[0]=&objtext;
    tuts[1]=&objvideo;
    tuts[0]->display();
    tuts[1]->display();

return 0;
}