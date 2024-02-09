#include <iostream>

using namespace std;

int main()
{
     double x_2311102051,y,hasil;

     cout<<"\===== Program Pembagian =====" <<endl;
     cout<<"\nMasukkan bilangan yang akan dibagi : "<<endl;
     cin>>x_2311102051;
     cout<<"\nMasukkan bilangan pembagi : "<<endl;
     cin>>y;

     if(y==0){
          cout<<"\nKesalahan, Bilangan pembagi tidak boleh NOL";
     }
     else{
          hasil = x_2311102051/y;
          cout<<"\nHasil bagi = "<<hasil;
     }
     return 0;
}
