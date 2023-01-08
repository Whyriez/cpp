#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int pilih,bilangan[100],bnyakData,angkaTerbesar,angkaTerkecil,i;
	char ulang;
	float phi=3.14,panjang,lebar,jari,tinggi,hasil;
	
	do{
	cout<<"1. Bilangan Terbesar Dan Terkecil"<<endl;
	cout<<"2. Piramida Bintang"<<endl;
	cout<<"3. Luas Persegi Panjang"<<endl;
	cout<<"4. Volume Tabung"<<endl;
	
	cout<<"Pilih Menu : "; cin>>pilih;
	
	switch(pilih){
		case 1:
			cout<<"BILANGAN TERBESAR DAN TERKECIL"<<endl;
			cout<<"Masukkan Banyak Data : "; cin>>bnyakData;
			
			for(i = 0; i < bnyakData; i++){
				cout<<"Bilangan " << i+1 << " = "; cin>>bilangan[i];
			}
			
			angkaTerbesar = bilangan[0];
			angkaTerkecil = bilangan[0];
			for(i = 1; i < bnyakData; i++){
    			if(bilangan[i] > angkaTerbesar){
      				angkaTerbesar = bilangan[i];
      				
      				
    			}else if(bilangan[i] < angkaTerkecil){
    				angkaTerkecil = bilangan[i];
    				
				}
  			}
  			for(i = 0; i < bnyakData; i++){
    			if(bilangan[i] == angkaTerbesar){
					cout<<"Bilangan Terbesar Adalah " << angkaTerbesar << " berada di urutan ke-" << i+1 <<endl;
      			}else if(bilangan[i] == angkaTerkecil){
      				cout<<"Bilangan Terkecil Adalah "<< angkaTerkecil << " berada di urutan ke-" << i+1 <<endl;
      			}
  			}	
			break;
		case 2:
			cout<<"PIRAMIDA BINTANG"<<endl;
			cout<<"Masukkan Jumlah Baris : "; cin>>bnyakData;
			for(i=1; i<=bnyakData; i++) {
 
    			for(int j=1; j<=bnyakData-i; j++) {
      				cout << " ";
    			}
 
    			for(int k=1; k<=i; k++) {
      				cout << " *";
    			}
   			 cout << endl;
 			}
			break;
		case 3:
			cout<<"LUAS PERSEGI PANJANG"<<endl;
			cout<<"Masukkan Panjang : "; cin>>panjang;
			cout<<"Masukkan Lebar : "; cin>>lebar;
			
			hasil = panjang * lebar;
			
			cout<<"Luas Persegi Panjang : "<< hasil << endl;
			break;
		case 4:
			cout<<"VOLUME TABUNG"<<endl;
			cout<<"Masukkan Jari Jari : "; cin>>jari;
			cout<<"Masukkan Tinggi : "; cin>>tinggi;
			
			hasil = (phi * tinggi * (pow(jari, 2)));
			
			cout<<"Volume Tabung : "<< hasil << endl;
			break;
	}
	cout << "kembali? (y/n)? ";
    cin >> ulang;
    cout << endl;
    
    }while (ulang != 'n');
 
   cout << "Terimakasih..."<<endl;
 
  return 0;

}
