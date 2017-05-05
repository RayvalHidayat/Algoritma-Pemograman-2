#include <iostream>
using namespace std;

int main () {
	int m [3] [3];
	int m1 [3] [3];
	int m2 [3] [3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "masukan nilai Matrik1 : ";
			cin >> m1 [i][j];
			cout << "masukan nilai Matrik2 : ";
			cin >> m2 [i][j];
			m [i] [j] = m1 [i] [j] + m2 [i] [j];
		}
	}
	for (int i = 0; i < 3; i++){
		cout << "-------------------" << endl;
		for (int j = 0; j < 3; j++){			
			cout << m [i] [j] << "  |  ";
			
		}
		cout << endl;
	}
	cout << "-------------------" << endl;
	return 0;
}