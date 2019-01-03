#include <iostream>

using namespace std;

int main (){
	
	char cari = '\0';
	string kalimat = "";
	int jumkat =0;
	
	cout <<"Masukan kalimat anda = ";
	getline (cin,kalimat);
	cout <<"\nMasukan Huruf yang ingin anda ketahui frekuensinya = ";
	cin >>cari;
	for (int i=0; i<kalimat.length();i++)
		if (kalimat[i]==cari){
			jumkat++;
		}
	
	cout << "\nHuruf"<<cari<< " Muncul Sebanyak "<<jumkat<<" Kali ";
	
	return 0;
}
