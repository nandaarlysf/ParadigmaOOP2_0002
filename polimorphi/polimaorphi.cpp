#include<iostream>
using namespace std;

class seseorang {
public:
   vitual void pesan()=0;
   //virtual void pesan(){
  // cout<<"pesan dari seseorang"<<endl; 
  //}
};
class joko :public seseorang {
 public:
     void pesan(){
        cout<<"pesan dari joko"<<endl;
     }   
};
class lila:public seseorang {
public:
     void pesan() {
        cout<<"pesan dari lila"<<endl;
     }   
};
