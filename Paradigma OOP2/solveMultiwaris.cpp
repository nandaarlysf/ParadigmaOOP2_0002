#include<iostream>
using namespace std;

class orang{
public:
   int umur;

   orang(int pumur): umur(pumur){
   cout << "orang dilihat dengan umur" << umur << "\n"
   << endl;
   }
};
class pekerja :public orang
{
public:
   pekerja(int pumur):orang(pumur)
   {
    cout<<"pekerja dibuat\n"
          <<endl;
   }    
};
class pelajar:public orang
{
public:
   pelajar (int pumur);orang(pumur)
   {
    cout<<"pelajar dilihat\n"
          <<endl;
   }
};
class budi :public pekerja,public pelajar
{
public:
    budi(int pumur):
    pekerja(pumur),
    pelajar(pumur)
    {
        cout<<"budi dilihat\n"
             <<endl;
    }
};
