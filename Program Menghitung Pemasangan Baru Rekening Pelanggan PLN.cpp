#include <iostream>
#include <cctype>
using namespace std;
int main(){
	
	string namaK, jenisPelanggan,pb;
	int sambungan,harga,pilihS,ppn,administrasi;
	char pilih;
	
	
	cout<<"Menghitung Pemasangan Baru Rekening Pelanggan PLN,"<<endl;
	cout<<"<<<< MENU >>>>"<<endl;
	cout<<"A Rumah Tangga"<<endl;
	cout<<"B Industri"<<endl;
	
	cout<<"Pilih Jenis Pelanggan : "; cin>>pilih;
	pilih = toupper(pilih);
	
	switch(pilih){
		case 'A':
				cout<<"================================"<<endl;
				cout<<"<<<< MENU SAMBUNGAN >>>>"<<endl;
				cout<<"1 0 - 450 Watt"<<endl;
				cout<<"2 451 - 900 Watt"<<endl;
				cout<<"3 901 - 1200 Watt"<<endl;
				cout<<"4 1200 - 2200 Watt"<<endl;
				cout<<"5 2201 - 4400 Watt"<<endl;
				
				cout<<"Pilih Sambungan Ke : "; cin>>pilihS;
				pilih = toupper(pilihS);
				
				switch(pilihS){
					case 1:
						harga = 650000;
						break;
					case 2:
						harga = 850000;
						break;
					case 3:
						harga = 1200000;
						break;
					case 4:
						harga = 1500000;
						break;
					case 5:
						harga = 1750000;
						break;
				}
				cout<<"Apakah Anda Ingin Melakukan Pemasangan Baru? (Ya/Tidak) : "; cin>>pb;
				if(pb == "Ya"){
					ppn = 0.10 * harga;
					administrasi = 0.05 * harga;
					harga = harga + ppn + administrasi;
				}else{
					ppn = 0 * harga;
					administrasi = 0 * harga;
				}
			break;	
		case 'B':
				cout<<"================================"<<endl;
				cout<<"<<<< MENU SAMBUNGAN >>>>"<<endl;
				cout<<"1 4401 - 9500 Watt"<<endl;
				cout<<"2 9501 - 12000 Watt"<<endl;
				cout<<"3 12001 - 16000 Watt"<<endl;
				cout<<"4 16001 - 22000 Watt"<<endl;
				cout<<"5 Up 22001 Watt"<<endl;
				
				cout<<"Pilih Sambungan Ke : "; cin>>pilihS;
				pilih = toupper(pilihS);
				
				switch(pilihS){
					case 1:
						harga = 2250000;
						break;
					case 2:
						harga = 2750000;
						break;
					case 3:
						harga = 3250000;
						break;
					case 4:
						harga = 4500000;
						break;
					case 5:
						harga = 6700000;
						break;
				}
				cout<<"Apakah Anda Ingin Melakukan Pemasangan Baru? (Ya/Tidak)"; cin>>pb;
				if(pb == "Ya"){
					ppn = 0.10 * harga;
					administrasi = 0.05 * harga;
					harga = harga + ppn + administrasi;
				}else{
					ppn = 0 * harga;
					administrasi = 0 * harga;
				}
			break;
	}
	
	
	cout<<"================================"<<endl;
	cout<<"Total Biaya : "<< harga;
	
	return 0;
}
