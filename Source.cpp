#include <iostream>

using namespace std;

int main()
{
	cout << "------------------\n" << "DEKLARASI VARIABEL\n" << "------------------\n" << endl;

	int a; 
	a = 10;
	
	cout << "Nilai dari Variabel a = " << a << "\n------------------\n" << endl;
	cout << "------------------\n" << "MENERIMA INPUT\n" << "------------------\n" << endl;

	int b;
	cout << "Masukkan Sebuah Nilai : "; cin >> b;
	cout << "Nilai yang Anda masukkan adalah : " << b << "\n------------------\n" << endl;

	cin.get();
	system("Pause");
	return 0;
}