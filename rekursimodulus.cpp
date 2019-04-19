#include <iostream>
using namespace::std;

int Modulus(int angka,int modul){
if(modul==0)
    return 1;
 if(modul<0)
    return 1/angka%Modulus(angka,modul+1);
}

main()
{
int a,m;
cout<<"masukkam angka :";
cin>>m;
cout<<"masukkan angka :";
cin>>a;

cout<<"sisa pembagiaaan :"<<Modulus(a,m);

}
