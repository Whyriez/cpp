#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	
	int data,diskon,unit[20], harga[20], sub_tot[20];
	string nama[20],kode_barang[20];
	float tot,totU;
	
	cout<<"Input Data Persediaan  "<<endl;
	cout<<"Jumlah Data : ";
	cin>>data; 
	
	for (int i=0; i<data;i++){
		cout<<endl;
		cout<<"Data "<<i+1<<endl;
	
		cout<<"Kode Barang : ";
		cin>>kode_barang[i]; 
		
		cout<<"Nama        : ";
		cin.ignore();
		getline(cin, nama[i]);
		
		cout<<"Unit        : ";
		cin>>unit[i];
		
		cout<<"Harga       : ";
		cin>>harga[i]; 
		
		sub_tot[i]=unit[i]*harga[i];
		tot+=sub_tot[i];
		totU+=unit[i];
	}
	cout<<endl;
	cout<<"         Data Persediaan Toko XYZ"<<endl;
	cout<<setiosflags(ios::left)<<"---------------------------------------------------------"<<endl;
	cout<<"Kode Barang   "<<setiosflags(ios::left)<<setw(8)<<"Nama"<<setiosflags(ios::left)<<setw(8)<<"Unit"<<setiosflags(ios::left)<<setw(8)<<"Harga"<<"Total"<<endl;
	cout<<setiosflags(ios::left)<<"---------------------------------------------------------"<<endl;
	for (int i=0;i<data;i++){
		cout<<setw(14)<<kode_barang[i]<<setw(8)<<nama[i]<<setw(8)<<unit[i]<<setw(8)<<harga[i]<<sub_tot[i]<<endl; 
	}
	cout<<setiosflags(ios::left)<<"---------------------------------------------------------"<<endl;
	cout<<setw(22)<<"Total"<<setw(16)<<totU<<tot<<endl;
	cout<<setiosflags(ios::left)<<"---------------------------------------------------------"<<endl;

}
