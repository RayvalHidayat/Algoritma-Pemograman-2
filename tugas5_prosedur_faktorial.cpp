#include <iostream>
using namespace std;

void factorial(int nilai);

int a;

int main(){
cout << "Masukan Nilai : ";
cin >> a;
factorial(a);
}

void factorial(int nilai){
	long long hasil;

	hasil = 1;

     //for Loop Block
     for (int counter = 1; counter <= nilai; counter++)
     {
         hasil = hasil * counter;
         
     }
     cout << "Hasil Faktorial dari " << nilai << " Adalah : " << hasil << endl;
}