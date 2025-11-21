//tugas tipe data biodata

#include <iostream>

using namespace std;

int main () {
	string nama;
	string jurusan;
	int umur;
	float tinggibadan;
	
	cout<<"Masukan nama: ";
	getline(cin, nama);
	
	cout<<"Masukan jurusan: ";
	getline(cin, jurusan);

	cout<<"Masukan umur: ";
	cin >> umur;
	
	cout<<"Masukan tinggi badan: ";
	cin >> tinggibadan;
	
	cout << nama << " masuk jurusan " << jurusan << endl;
    cout << " ber umur " << umur << " dengan tinggi badan " << tinggibadan << endl;
}