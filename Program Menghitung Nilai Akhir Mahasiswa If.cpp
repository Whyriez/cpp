#include <iostream>
using namespace std;
int main(){
	float kehadiran, tugas, uts, uas, nilai_Akhir;
	char nilai_huruf;
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	
	cout<<"==== Masukkan Nilai (1-100) ===="<<endl;
	cout<<"Masukkan Nilai Kehadiran : ";cin>>kehadiran;
	cout<<"Masukkan Nilai Tugas : ";cin>>tugas;
	cout<<"Masukkan Nilai Uts : ";cin>>uts;
	cout<<"Masukkan Nilai Uas : ";cin>>uas;
	cout<<"================================"<<endl;
	
	
	nilai_Akhir = (kehadiran * 0.2  + tugas * 0.2 + uts * 0.3 + uas * 0.3);	
	
	if(nilai_Akhir >= 80){
		nilai_huruf = 'A';
//		cout<<"Nilai Huruf : A"<<endl;
	}else if(nilai_Akhir >= 70){
		nilai_huruf = 'B';
//		cout<<"Nilai Huruf : B"<<endl;
	}else if(nilai_Akhir >= 60){
		nilai_huruf = 'C';
//		cout<<"Nilai Huruf : C"<<endl;
	}else if(nilai_Akhir < 60){
		nilai_huruf = 'D';
//		cout<<"Nilai Huruf : D"<<endl;
	}
	
	
	cout<<"Nilai Akhir : "<< nilai_Akhir <<endl;
	cout<<"Nilai Huruf : "<< nilai_huruf <<endl;

	
}
