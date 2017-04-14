#include <iostream>
using namespace std;

int main (){
int x;
	cout << "masukan x :";
	cin >> x;

	string nama [x];
int i;

	for (int i=0; i<x; i++){
	cin >> nama[i];
}

	for (int i=0; i<x; i++){
	cout << nama [i] << "\n";
	}
return 0; 
}
