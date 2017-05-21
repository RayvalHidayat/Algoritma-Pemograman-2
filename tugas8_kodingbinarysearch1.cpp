#include <iostream>
using namespace std;

#include<iostream>
int main(){
	int nilai[10], searchVal, left, right, mid;
	string menu;
	bool hasil;
	for (int x = 0; x < 10; x++){
		cout << "Masukan Nilai Siswa ke "<< x << " : ";
		cin >> nilai[x];
	}

	cout << "Nilai sudah dimasukan, Ketik 'S' untuk mencari.." << endl;
	cin >> menu;
	if (menu == "S"){
		cout << "Masukan Nilai Yang akan dicari : ";
		cin >> searchVal;
		left = 0;
		right = sizeof(nilai)-1;
		for (int i = 0; i < 10; i++){
			mid = (left + right)/2;
			if (nilai[mid] == searchVal){
				hasil = true;
				break;
			} else if (nilai[mid] > searchVal) {
				right = mid-1;
			} else {
				left = mid + 1;
			}
		}
		if (hasil == true){
			cout << "Data Nilai Ditemukan pada elemen ke-"<< mid;
		} else {
			cout << "Data Nilai Tidak Ditemukan";
		}
	}
	return 0;
	
}
