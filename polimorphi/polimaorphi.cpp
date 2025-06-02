#include <iostream>
using namespace std;

class seseorang {
public:
   virtual void pesan()=0;
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
int main(){
    seseorang*obyek;
    joko a;
    lila b;
    
obyek=&a;
    obyek->pesan();
    obyek=&b;
    obyek->pesan();
    //a.seseorang::pesan();
    //b.seseorang::pesan();
    
    return 0;
}