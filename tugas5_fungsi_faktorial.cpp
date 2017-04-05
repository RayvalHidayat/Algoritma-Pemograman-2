#include <iostream>
using namespace std;

long long factorial(int nilai);

int a;

int main(){
	cout << "Masukan Nilai : ";
	cin >> a;
	cout << "Hasil Faktorial dari " << nilai << " Adalah : " << factorial(a) << endl;
}

long long factorial(int nilai){
	long long hasil;
	hasil = 1;
	
     //for Loop Block
     for (int counter = 1; counter <= nilai; counter++)
     {
         hasil = hasil * counter;
         
     }
     return hasil
}