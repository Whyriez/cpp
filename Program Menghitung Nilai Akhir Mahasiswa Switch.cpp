#include <iostream>
using namespace std;
int main(){
	int kehadiran, tugas, uts, uas, nilai_Akhir, A,B,C,D;
	
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	
	cout<<"==== Masukkan Nilai (1-100) ===="<<endl;
	cout<<"Masukkan Nilai Kehadiran : ";cin>>kehadiran;
	cout<<"Masukkan Nilai Tugas : ";cin>>tugas;
	cout<<"Masukkan Nilai Uts : ";cin>>uts;
	cout<<"Masukkan Nilai Uas : ";cin>>uas;
	cout<<"================================"<<endl;
	
	
	nilai_Akhir = (kehadiran * 0.2  + tugas * 0.2 + uts * 0.3 + uas * 0.3);
	
	switch(nilai_Akhir){
		case 80:
			cout<<"Nilai Huruf : A"<<endl;
			break;
		case 70:
			cout<<"Nilai Huruf : B"<<endl;
			break;
		case 60:
			cout<<"Nilai Huruf : C"<<endl;
			break;
		default:
			cout<<"Nilai Huruf D"<<endl;
			break;
	}
	
	cout<<"Nilai Akhir : "<< nilai_Akhir <<endl;

	
}
