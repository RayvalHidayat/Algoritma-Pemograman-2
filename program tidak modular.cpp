#include <iostream>
using namespace std;
int main () {
int a,b,temp;
cout << " masukan nilai a : ";
cin >> a;
cout << " masukan nilai b : ";
cin >> b;
temp = b;
b = a ;
a = temp;
cout << "=====================" << endl;
cout << " Nilai A sekarang : " << a << endl ;
cout << " Nilai B sekarang : " << b << endl;
return 0;
}