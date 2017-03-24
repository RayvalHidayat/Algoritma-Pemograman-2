#include <iostream>
using namespace std;
void prosesBaca();
int prosesTambah();
int prosesKurang();
void prosesTampil();
int a,b;
int main () {
	prosesBaca();
	prosesTampil();
	return 0;
}
void prosesBaca () {	
	cout << "Masukan Nilai A : ";
	cin >> a;
	cout << "Masukan Nilai B : ";
	cin >> b;
}
int prosesTambah () {	
	return a+b;
}
int prosesKurang () {
	int hasil;
	hasil = a-b;	
return hasil;	
}
void prosesTampil() {	
	cout << "Hasil Tambah : " << prosesTambah() << endl;
	cout << "Hasil Kurang : " << prosesKurang();
}