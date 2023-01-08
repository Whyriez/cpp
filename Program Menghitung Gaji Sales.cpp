#include <iostream>
using namespace std;
int main ()
{
	int jumlahS,gaji_sales,gaji_pokok[20],hasil_penjualan[20],bonus[20],gaji_bersih,total_bonus,total_hasilPenjualan,total_komisi,total_gaji,komisi_hasilPenjualan[20];
	string nama_sales[20];
	cout<<"Masukkan Jumlah Sales: ";
	cin>>jumlahS;
	for(int x = 1; x<=jumlahS;x++)
	{
		cout<<"Sales Ke: "<<x<<endl;
		cout<<"Nama Sales: ";
	    cin>>nama_sales[x];
	    cout<<"Gaji Pokok: ";
	    cin>>gaji_pokok[x];
	    cout<<"Hasil Penjualan: ";
	    cin>>hasil_penjualan[x];  
	}

	total_gaji = 0;
	total_bonus = 0;
	total_hasilPenjualan = 0;
	total_komisi = 0;
	cout<<"\nString array:\n";
	for (int x = 1; x<=jumlahS; x++)
	{
		if(hasil_penjualan[x] >= 5000000 && hasil_penjualan[x] < 10000000){
			komisi_hasilPenjualan[x] = hasil_penjualan[x] * 0.12;
			bonus[20] = 0;
		}else if(hasil_penjualan[x] < 5000000){
			komisi_hasilPenjualan[x] = hasil_penjualan[x] * 0.08;
			bonus[20] = 0;
		}else if(hasil_penjualan[x] >= 10000000){
			komisi_hasilPenjualan[x] = hasil_penjualan[x] * 0;
			bonus[20] = hasil_penjualan[x] * 0.05; 
		}
		cout <<"Nama Sales 	:" << nama_sales[x] << "\n"; 
		gaji_sales = gaji_pokok[x] + komisi_hasilPenjualan[x] + bonus[20];
		cout <<"Gaji Bersih 	:"<< gaji_sales << "\n"; 
		cout <<"Hasil Penjualan :"<< hasil_penjualan[x] << "\n"; 
		cout <<"Bonus 		:"<< bonus[20]<< "\n"; 
		cout <<"Komisi 		:"<< komisi_hasilPenjualan[x] << "\n";
		cout <<"------------------------------------------------"<< "\n";
		total_hasilPenjualan = total_hasilPenjualan + hasil_penjualan[x];
		total_komisi = total_komisi + komisi_hasilPenjualan[x];
		total_bonus = total_bonus + bonus[20];
		total_gaji = total_gaji + gaji_sales;
		
	} 
	cout <<"Total Hasil Semua Penjualan 	:"<< total_hasilPenjualan << "\n";
	cout <<"Total Komisi 			:"<< total_komisi << "\n";
	cout <<"Total Bonus 			:"<< total_bonus << "\n";
	cout <<"Total Gaji 			:"<< total_gaji << "\n";
		
	return 0;
}
