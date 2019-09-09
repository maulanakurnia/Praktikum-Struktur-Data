//07 September 2019
//123180176 - Maulana Kurnia Fiqih Ainul Yaqin
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

struct data {
    char nik[20];
    char nama[20];
    char ttl[20];
	char alamat[20];
	char agama[20];
	char status[20];
	char pekerjaan[20];
}ktp[50], temp;

void input();
void output();
void cariseq();
void hapus();

int pil, jmlh,i,j;
char yt;
string cari;
bool found;

int main(){
    do
	{
		cout << "=====================================================\n";
		cout << "      MENU DATA PENDUDUK                             \n";
		cout << "-----------------------------------------------------\n";
		cout << "1. INPUT DATA PENDUDUK                               \n";
		cout << "2. LIHAT DATA PENDUDUK / CARI DATA PENDUDUK          \n";
        cout << "3. HAPUS DATA PENDUDUK                               \n";
		cout << "=====================================================\n";
		cout << "PILIH = ";
		cin >> pil;
		cout << "\n\n";
		switch (pil)
		{
		case 1:
			input(); 
			break;
		case 2:
			output(); 
			break;
        case 3:
			hapus(); 
			break;
		default:
			cout << "Input Salah\n";
		}
		cout << "\nKEMBALI KE MENU? (y/t) ";
		cin >> yt;
		cout << endl;
	} while (yt == 'y' || yt == 'Y');
}

void input(){
    system("clear");

	cout << "\nJumlah Data : ";
	cin >> jmlh;
	for (i = 0; i < jmlh; i++)
	{
		cout << "\nData Ke-" << i + 1 << endl;
		cout << "NIK               : "; cin >> ktp[i].nik;
		cin.ignore();
		cout << "Nama              : "; cin.getline(ktp[i].nama, sizeof(ktp[i].nama));
		cin.ignore();
		cout << "Tanggal Lahir     : "; cin.getline( ktp[i].ttl, sizeof( ktp[i].ttl));
		cin.ignore();
		cout << "Alamat            : "; cin.getline( ktp[i].alamat, sizeof( ktp[i].alamat));
		cout << "Agma              : "; cin >> ktp[i].agama;
		cout << "Status            : "; cin >> ktp[i].status;
		cout << "Pekerjaan         : "; cin >> ktp[i].pekerjaan;
		cout << endl;
	}
}

void output(){
    system("clear");

	cout << "========================================================" << endl;
	cout << "                       DAFTAR PENDUDUK                  " << endl;
	cout << "========================================================" << endl;
	cout << "No  NIK" << setw(20) << "NAMA" << setw(20) << "TTL" << setw(10) << "ALAMAT" << setw(10) <<"AGAMA" <<setw(10) <<"STATUS" << setw(10) <<"PEKERJAAN\n";
	cout << "--------------------------------------------------------" << endl;

	for (i = 0; i < jmlh; i++)
	{
		cout << i + 1 << "   ";
		cout << ktp[i].nik << setw(20) << ktp[i].nama << setw(20) << ktp[i].ttl << setw(10) <<ktp[i].alamat << setw(10) << ktp[i].agama << setw(10) << ktp[i].status << setw(10) << ktp[i].pekerjaan;
		cout << endl;
	}
	cout << "========================================================" << endl;
	cout << "Ingin Mencari? (y/t) ";
	cin >> yt;
	if (yt == 'y' || yt == 'Y')
	{
		cariseq();
	}
}
void cariseq(){
	system("clear");
	
	cout << "Masukkan Nama : ";
	cin >> cari;
	found = false;
	if (!found)
	{
		cout << "\033[1;32mDATA DITEMUKAN!\033[0m\n";
	}

    for (i = 0; i < jmlh; i++){
		if (cari == ktp[i].nama)
		{
			cout << endl;
			cout << "NIK               : " << ktp[i].nik << endl;
			cout << "Nama              : " << ktp[i].nama << endl;
			cout << "Tanggal Lahir     : " << ktp[i].ttl << endl;
			cout << "Alamat            : " << ktp[i].alamat << endl;
			cout << "Agma              : " << ktp[i].agama << endl;
			cout << "Status            : " << ktp[i].status << endl;
			cout << "Pekerjaan         : " << ktp[i].pekerjaan << endl;
			found = true;
		}
	}

    if (found == false)
    {   
        system("clear");
        cout << "\033[1;31mMOHON MAAF DATA YANG ANDA CARI TIDAK DAPAT DITEMUKAN\033[0m\n"<< endl;
    }
    

}
void hapus(){
    int x,y;

	cout << "========================================================" << endl;
	cout << "                       DAFTAR PENDUDUK                  " << endl;
	cout << "========================================================" << endl;
	cout << "No  NIK" << setw(20) << "NAMA" << setw(20) << "TTL" << setw(10) << "ALAMAT" << setw(10) <<"AGAMA" <<setw(10) <<"STATUS" << setw(10) <<"PEKERJAAN\n";
	cout << "--------------------------------------------------------" << endl;

	for (i = 0; i < jmlh; i++)
	{
		cout << i + 1 << "   ";
		cout << ktp[i].nik << setw(20) << ktp[i].nama << setw(20) << ktp[i].ttl << setw(10) <<ktp[i].alamat << setw(10) << ktp[i].agama << setw(10) << ktp[i].status << setw(10) << ktp[i].pekerjaan;
		cout << endl;
	}
	cout << "========================================================" << endl;
	
    cout<<"Hapus data ke-";cin>>x;
    y=x-1;
    jmlh--;

    for(int i=y;i<jmlh;i++) {
        ktp[i] = ktp[i+1];
    }
}

