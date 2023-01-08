#include <iostream>
using namespace std;
int main(){
	int jumlahData, nim[50],nilaiUjian[50],rata,total = 0;
	string nama[50],tempatL[50],tanggalL[50],alamatJL[100],alamatK[100];
	
	cout<<"Banyak Data Mahasiswa : ";cin>>jumlahData;
	cout<<endl;
	for(int i=1;i<=jumlahData;i++){
		cout<<"Data Mahasiswa ke-"<<i<<endl;
		cout<<"Nim           : ";cin>>nim[i];
		cout<<"Nama          : ";cin>>nama[i];
		cout<<"Tempat Lahir  : ";cin>>tempatL[i];
		cout<<"Tanggal Lahir : ";cin>>tanggalL[i];
		cin.ignore();
		cout<<"Alamat        : ";getline(cin, alamatJL[i]);
		cout<<"              : ";getline(cin, alamatK[i]);
		cout<<"Nilai Ujian   : ";cin>>nilaiUjian[i];
		total=total+nilaiUjian[i];	
	}
	rata = total/jumlahData;
	cout<<endl;
	cout<<"Output Data : "<<endl;
	for(int i=1; i<=jumlahData; i++) {
        cout<<"Nim 	       :"<<nim[i]<<endl;
		cout<<"Nama 	       :"<<nama[i]<<endl;
		cout<<"Tempat Lahir   :"<<tempatL[i]<<endl;
		cout<<"Tanggal Lahir  :"<<tanggalL[i]<<endl;
		cout<<"Alamat 	       :"<<alamatJL[i]<<endl;
		cout<<" 	       :"<<alamatK[i]<<endl;
		cout<<"Nilai Ujian    :"<<nilaiUjian[i]<<endl;
		cout<<endl;
	}
	cout<<"================================================"<<endl;
	cout<<"Rata-Rata Nilai :"<<rata<<endl;
	cout<<"Total Peserta   :"<<jumlahData<<endl;
	
}
