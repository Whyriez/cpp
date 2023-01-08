#include<iostream>
#include <iomanip>
using namespace std;
struct Data{
    string nd;
    int pt;
};
	
void tambahP(struct Data data[]){
    for(short i=0; i<=5; i++){
        cout<<"Data ke-"<< i+1<<endl;  
        cin.ignore();
        cout<<"Nama Daerah: ";getline(cin, data[i].nd);
        cout<<"Produksi dlm ton: "; cin>>data[i].pt;
    }
}
void tampilP(struct Data d[], short n)
{
    cout<<"Produksi Jagung"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"No  |  Nama Daerah      |   Produksi dlm Ton"<<endl;
    cout<<"------------------------------------------"<<endl;
    for(short i=0; i<n; i++){
    	cout<<setiosflags(ios::left)<<setw(4)<<i+1<<"| "<<setiosflags(ios::left)<<setw(18)<<d[i].nd<<"| "<<d[i].pt<<endl;
	}     
    cout<<"------------------------------------"<<endl;
}
void urutTonTerbesar(struct Data d[], short n)
{
    int j, p,temp_ton;
    string temp_nama;
    cout<<"Produksi Jagung"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"No  |  Nama Daerah      |   Produksi dlm Ton"<<endl;
    cout<<"------------------------------------------"<<endl;
    for(j=1; j<n; j++) {
      for(p=0; p<n-j; p++){
        if(d[p].pt < d[p + 1].pt){
    		temp_ton = d[p].pt;
    		d[p].pt = d[p + 1].pt;
    		d[p + 1].pt = temp_ton;
    		
    		temp_nama = d[p].nd;
    		d[p].nd = d[p + 1].nd;
    		d[p + 1].nd = temp_nama;
		}	
	  }
   }
    
    for(short i=0; i<n; i++){
    	cout<<setiosflags(ios::left)<<setw(4)<<i+1<<"| "<<setiosflags(ios::left)<<setw(18)<<d[i].nd<<"| "<<d[i].pt<<endl;
	} 
    cout<<"------------------------------------"<<endl;

}

void cariP(struct Data d[], int n, short no)
{
   int Cari = 0;
   for(short i=0;i<n;i++){
   		if(no == i+1){
   			Cari = 1;
   			cout<<endl;
   			cout<<"-------------------------------\n";
            cout<<"Nama Daerah : "<<d[i].nd<<endl;
            cout<<"Total produksi : "<<d[i].pt<<" ton"<<endl;
            cout<<"-------------------------------\n";
	   }
   }
   if(Cari == 0){
   	cout<<endl;
   	cout<<"-------------------------------\n";
   	cout<<"No Produksi Tidak Ditemukan!!"<<endl;
   	cout<<"-------------------------------\n";
   }
}

int main(){
	Data data[100];
	int pilihMenu, cari;
	char ulangMenu = 'y';
	
	do{
		cout<<"==========Program Produksi Jagung=========="<<endl;
		cout<<"Menu Pilihan"<<endl;
		cout<<"1. Input Data Produksi"<<endl;
		cout<<"2. Cari Berdasarkan Nomor"<<endl;
		cout<<"3. Urut Berdasarkan Produksi terbesar"<<endl;
		cout<<"4. Tampil Data Produksi"<<endl;
		cout<<"5. Keluar"<<endl;
		
		cout<<"Pilih Menu : ";cin>>pilihMenu;
		
		if(pilihMenu == 1){
				cout<<endl;
				cout<<"===================================="<<endl;
				cout<<"Tambah Data Produksi Jagung"<<endl;
				tambahP(data);
				cout<<endl;
		}else if(pilihMenu == 2){
				cout<<endl;
				cout<<"===================================="<<endl;
				cout<<"Cari Data Produksi Berdasarkan No"<<endl;
        		cout<<"No Yang Ingin Dicari : ";cin>>cari;
        		cariP(data,6,cari);
        		cout<<endl;
		}else if(pilihMenu == 3){
				cout<<endl;
				cout<<"===================================="<<endl;
				cout<<"Tampil Data Urutan Produksi Jagung Yang Terbesar"<<endl;
				urutTonTerbesar(data, 6);
				cout<<endl;
		}else if(pilihMenu == 4){
				cout<<endl;
				cout<<"===================================="<<endl;
				cout<<"Tampil Data Produksi Jagung"<<endl;
				tampilP(data, 6);
				cout<<endl;
		}else if(pilihMenu == 5){
				cout<<endl;
				cout<<"===================================="<<endl;
				cout<<"Anda berhasil keluar..."<<endl;
				ulangMenu = 'n';
		}
		
	}while (ulangMenu != 'n');
	return 0;
}
