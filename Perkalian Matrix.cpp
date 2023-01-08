#include <iostream>
using namespace std;
int main()
{
	int matrixA[30][30], matrixB[30][30],hasil[30][30];
	int i, j, k,jumlahBaris,jKA,jKB,jumlah =0;
	
	cout<<"Masukkan Jumlah Baris Matrix A :";cin>>jumlahBaris;
	cout<<"Masukkan Jumlah Kolom Matrix A :";cin>>jKA;
	cout<<"Masukkan Jumlah Kolom Matrix B :";cin>>jKB;
	
	cout<<"Input Nilai Matrix A :"<<endl;
	for(i=0; i<jumlahBaris; i++) {
		for(j=0; j<jKA; j++) {
			cout<<"A [ " << i+1<<" "<<j+1<<" ] = ";cin>>matrixA[i][j];
		}
		cout<<endl;
	}
	cout<<"Input Nilai Matrix B :"<<endl;
	for(i=0; i<3; i++) {
		for(j=0; j<jKB; j++) {
			cout<<"B [ " << i+1<<" "<<j+1<<" ] = ";cin>>matrixB[i][j];
		}
		cout<<endl;
	}
	
	for(i=0; i<jumlahBaris; i++){
		for(j=0; j<jKB; j++) {
			for(k=0; k<3; k++) {
				jumlah = jumlah + matrixA[i][k] * matrixB[k][j];
			}
			hasil[i][j] = jumlah;
			jumlah = 0; 
		}
	}

	cout<<"Hasil Perkalian Matrix :"<<endl;
	for(i=0; i<jumlahBaris; i++) {
		for(j=0; j<jKB; j++){
			cout<< hasil[i][j] << "\t";
		}
		cout<<endl;
	}
	
	return 0;
}
