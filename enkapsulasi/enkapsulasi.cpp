#include<iostream>
using namespace std;

class remoteLampu{
    private:
      string saklarNo[];
public:
   void SetSaklarNo(int i,string value){
    saklarNo[i]=value;
   }
   string getSaklarNo(int i){
    return saklarNo[i];
   }
};

int main(){
    remoteLampu lampuRumah;

    lampuRumah.SetSaklarNo(0,"Lampu Teras Rumah");
    lampuRumah.SetSaklarNo(1,"Lampu Ruang Tamu");
    lampuRumah.SetSaklarNo(2,"Lampu kamar Tidur");
     lampuRumah.SetSaklarNo(3,"Lampu Dapur");
     
   cout<<lampuRumah.getSaklarNo(0)<<endl;  
   cout<<lampuRumah.getSaklarNo(1)<<endl;  
    cout<<lampuRumah.getSaklarNo(2)<<endl;  
     cout<<lampuRumah.getSaklarNo(3)<<endl;
     
     return 0;
};