//04 September 2019
//123180176 - Maulana Kurnia Fiqih Ainul Yaqin
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct matkul{
	char namkul[50];
	float nilai;
};

struct mahasiswa{
	char nim[12];
	char kelas[15];
	char nama[50];
	matkul matakul[20];
}mhs[100];


	
int main(){
	int i,j, jmlh, jmlhmatkul;
		
    float total[10], rata[10];

	cout << "Masukkan Data :"; cin >> jmlh;
	for (i=0; i<jmlh; i++){
		cout << "Data Ke-" << i+1 <<endl;
		cout << "NIM : "; cin >> mhs[i].nim;
		cin.ignore();
		cout << "Nama : "; cin.getline(mhs[i].nama, sizeof(mhs[i].nama));
		cout << "Kelas : "; cin >> mhs[i].kelas;
		cout << "Jumlah Matkul : "; cin >> jmlhmatkul;
		for (j=0; j< jmlhmatkul; j++){
			cout << "\tMatkul Ke-" << j+1 <<endl;
			cin.ignore();
			cout << "\tNama Matkul : "; cin.getline(mhs[i].matakul[j].namkul, sizeof(mhs[i].matakul[j].namkul));
			cout << "\tNilai : "; cin >> mhs[i].matakul[j].nilai;
			total[i] = total[i] + mhs[i].matakul[j].nilai;
			cout << endl;
		}
		rata[i] = total[i]/jmlhmatkul;
	}
	cout << "\nOUTPUT\n\n";
	for (i=0; i<jmlh; i++){
		cout << "Data Ke-" << i+1 <<endl;
		cout << "NIM : " << mhs[i].nim;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nKelas : " << mhs[i].kelas;
		for (j=0; j<jmlhmatkul; j++){
			cout << "\n\tMatkul Ke-" << j+1 <<endl;
			cout << "\t\tNama Matkul : " << mhs[i].matakul[j].namkul;
			cout << "\n\t\tNilai : " << mhs[i].matakul[j].nilai;
			cout << endl;
		}
	}
	
	cout <<"REKAP\n";
	cout << "NIM" << setw(25) << "NAMA" << setw(20) << "KELAS  " << setw(15) << "RATA-RATA\n";
	for (i=0; i<jmlh; i++){
		cout << mhs[i].nim << setw(20) << mhs[i].nama <<setw(15)<< mhs[i].kelas << setw(15) << rata[i];
		cout << endl;
	}
}
