#include<iostream>
#include <cstring>
#include <iomanip>
using namespace std;
typedef struct tipe{
    short no;
    string namaDaerah;
    long int produksiTon;
}
	produksi;
	produksi temp_data;
	

int main(){
	tipe data[90];
	int pilihMenu;
	char ulang = 'y';
	int temu = 0,k, l,jumlahData;
	short cariData, i;
	
	
	do{
		cout<<endl;
		cout<<"==========Produksi Jagung=========="<<endl;
		cout<<"Menu Pilihan"<<endl;
		cout<<"1. Input Data Produksi"<<endl;
		cout<<"2. Cari Berdasarkan Nomor"<<endl;
		cout<<"3. Urut Berdasarkan Produksi terbesar"<<endl;
		cout<<"4. Tampil Data Produksi"<<endl;
		cout<<"5. Keluar"<<endl;
		
		cout<<"Pilih Menu : ";cin>>pilihMenu;
		
		switch(pilihMenu){
			case 1:
				cout<<endl;
				cout<<"==========================================="<<endl;
				cout<<"Tambah Data Produksi"<<endl;
				cout<<endl;
				cout<<"Masukkan Jumlah Data Produksi :";cin>>jumlahData;
				cout<<"Masukkan Data Produksi :"<<endl;
				for(short i=0; i<=jumlahData - 1; i++){
    	
    			cout<<"Data Ke-"<< i+1 <<endl;   
    			cin.ignore();
        		cout<<"Nama Daerah: ";getline(cin, data[i].namaDaerah);
        		cout<<"Produksi dlm ton: "; cin>>data[i].produksiTon;
    			}
    			cout<<endl;
				break;
			case 2:
				
				cout<<endl;
				cout<<"==========================================="<<endl;
				cout<<"Cari Data Produksi Berdasarkan No Produksi"<<endl;
				cout<<endl;
			
        		cout<<"No Yang Ingin Dicari : ";cin>>cariData;
        		
        		
			   for(short i=0;i<6;i++){
			   		if(cariData == i+1){
			   			temu = 1;
			   			cout<<endl;
			   			cout<<"Data Ditemukan :\n";
			   			cout<<"-------------------------------\n";
			            cout<<"Nama Daerah : "<<data[i].namaDaerah<<endl;
			            cout<<"Total produksi : "<<data[i].produksiTon<<" ton"<<endl;
			            cout<<"-------------------------------\n";
				   }
			   }
			   if(temu == 0){
			   	cout<<endl;
			   	cout<<"-------------------------------"<<endl;
			   	cout<<"No Produksi Tidak Ada Dalam Daftar"<<endl;
			   	cout<<"-------------------------------"<<endl;
			   }
			   	cout<<endl;
				break;
			case 3:
				cout<<endl;
				cout<<"==========================================="<<endl;
				cout<<"Tampilan Data Urutan Produksi Terbesar"<<endl;
				cout<<endl;
			    
			    cout<<"Produksi Jagung Dari Ton Yang Paling Besar"<<endl;
			    cout<<"------------------------------------------"<<endl;
			    cout<<"No  |  Nama Daerah      |   Produksi dlm Ton"<<endl;
			    cout<<"------------------------------------------"<<endl;
			    for(k=1; k<7; k++) {
			      for(l=0; l<6-k; l++){
			        if(data[l].produksiTon < data[l + 1].produksiTon){
			    		temp_data.produksiTon = data[l].produksiTon;
			    		data[l].produksiTon = data[l + 1].produksiTon;
			    		data[l + 1].produksiTon = temp_data.produksiTon;
			    		
			    		temp_data.namaDaerah, data[l].namaDaerah;
			    		data[l].namaDaerah, data[l + 1].namaDaerah;
			    		data[l + 1].namaDaerah, temp_data.namaDaerah;
					}	
				  }
			    }
    
    			for(i=0; i<6; i++)
       			cout<<setiosflags(ios::left)<<setw(4)<<i+1<<"| "<<setiosflags(ios::left)<<setw(18)<<data[i].namaDaerah<<"| "<<data[i].produksiTon<<endl;  
    			cout<<"==========================================="<<endl;
    			cout<<endl;
				break;
			case 4:
				cout<<endl;
				cout<<"==========================================="<<endl;
				cout<<"Tampilan Data Produksi"<<endl;
				cout<<endl;
				
    			cout<<"Produksi Jagung"<<endl;
    			cout<<"------------------------------------------"<<endl;
    			cout<<"No  |  Nama Daerah      |   Produksi dlm Ton"<<endl;
    			cout<<"------------------------------------------"<<endl;
    			for(i=0; i<6; i++){
    				cout<<setiosflags(ios::left)<<setw(4)<<i+1<<"| "<<setiosflags(ios::left)<<setw(18)<<data[i].namaDaerah<<"| "<<data[i].produksiTon<<endl;
				}
    			cout<<"=========================================="<<endl;
    			cout<<endl;
				break;
			case 5:
				cout<<endl;
				cout<<"==========================================="<<endl;
				cout<<"Berhasil Keluar"<<endl;
				cout<<"==========================================="<<endl;
				ulang = 'n';
				break;
				
		}
		
	}while (ulang != 'n');
	return 0;
}
