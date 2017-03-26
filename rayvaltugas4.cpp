#include      <iostream>
using namespace std;

// deklarasi fungsi 
bool iswithinrange(float nilai, int max, int min);
void prosescetak();

//deklarasi variable
float nilai_ip, total_ip;
bool valid;
int jumlah_mahasiswa, jumlah_lulus, jumlah_tidaklulus;

int main () {
do {
    cout<< "Masukan nilai ip :";
	cin>> nilai_ip;
	valid = iswithinrange (nilai_ip,4,0);
	if (valid) {
	if (nilai_ip >= 2.75) {
	jumlah_lulus++ ;
	}	else {
	jumlah_tidaklulus++;
	}
	total_ip = total_ip +nilai_ip;
	jumlah_mahasiswa++;
     } else {
	cout << "tidak ada data" << endl;
	 }
	
} while (nilai_ip != -999);
prosescetak ();
}

bool  iswithinrange (float nilai, int max,int min) {
if (nilai >= max || nilai <= 0 ) {
	return false;
}
	
	return true ;
} 


void prosescetak () {
	cout << "banyaknya mahasiswa : " << jumlah_mahasiswa << endl;
	cout << "banyaknya mahasiswa lulus : " <<jumlah_lulus << endl;
	cout << "banykanya mahasiswa tidak lulus : " <<jumlah_tidaklulus << endl;
	cout << "rata-rata nilai ip : " << (total_ip / jumlah_mahasiswa ) << endl;
}