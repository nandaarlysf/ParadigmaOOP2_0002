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
class pekerja : virtual public orang
{
public:
   pekerja(int pumur):orang(pumur)
   {
    cout<<"pekerja dibuat\n"
          <<endl;
   }    
};