#include <iostream>
using namespace std;
void prosesBaca();
void prosesTukar();
void prosesTampil();
int a,b,temp;
int main () {
prosesBaca();
prosesTukar();
prosesTampil();
return 0;
}
void prosesBaca(){
cout << "Masukan nilai A : ";
cin >> a;
cout << "masukan nilai B : ";
cin >> b;	
}
void prosesTukar () {	
temp = b;
b = a;
a = temp;	
}
void prosesTampil () {	
cout << "==================" << endl;
cout << "Nilai A sekarang : " << a << endl;
cout << "Nilai B sekarang : " << b;
}