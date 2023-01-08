#include <iostream>
using namespace std;
int main()
{
    string nama[30];
    long int jumlah_mhsiswa,ppd[30],ptsi[30],agama[30],total_nilai[30],rata_rata[30],i,pancasila[30],so[30],lm[30],pp[30],ap[30];

    cout<<"PENGIMPUTAN NILAI MAHASIWA"<<endl;
    cout<<"--------------------------------"<<endl;

    cout<<"Masukan jumlah mahasiswa: ";cin >> jumlah_mhsiswa;
    cin.ignore();
    
    i = 1;
    for(i=1; i<= jumlah_mhsiswa; i++)
	{
    	cout<<"Input : "<<endl;
        cout<<"Masukan nama mahasiswa               : ";getline(cin, nama[i]);
        cout<<"Masukan nilai PPD                    : ";cin>>ppd[i];
        cout<<"Masukan nilai PTSI                   : ";cin>>ptsi[i];
        cout<<"Masukan nilai Agama                  : ";cin>>agama[i];
        cout<<"Masukan nilai Pancasila              : ";cin>>pancasila[i];
        cout<<"Masukan nilai Sistem Operasi         : ";cin>>so[i];
        cout<<"Masukan nilai Logika Matematika      : ";cin>>lm[i];
        cout<<"Masukan nilai Pengantar Pendidikan   : ";cin>>pp[i];
        cout<<"Masukan nilai Algaritma Pemrograman  : ";cin>>ap[i];
        cin.ignore();
	}
	
	for(i=1; i<= jumlah_mhsiswa; i++)
	{
    	cout<<"Output : "<<endl;
        cout<<"Mahasiswa ke-"<<i<<endl;
        cout<<"Nama mahasiswa                       : "<<nama[i]<<endl;
        cout<<"Masukan nilai PPD                    : "<<ppd[i]<<endl;
        cout<<"Masukan nilai PTSI                   : "<<ptsi[i]<<endl;
        cout<<"Masukan nilai Agama                  : "<<agama[i]<<endl;
        cout<<"Masukan nilai Pancasila              : "<<pancasila[i]<<endl;
        cout<<"Masukan nilai Sistem Operasi         : "<<so[i]<<endl;
        cout<<"Masukan nilai Logika Matematika      : "<<lm[i]<<endl;
        cout<<"Masukan nilai Pengantar Pendidikan   : "<<pp[i]<<endl;
        cout<<"Masukan nilai Algaritma Pemrograman  : "<<ap[i]<<endl;

        total_nilai[i] = ap[i] + lm[i] + so[i] + pancasila[i] + agama[i] + ptsi[i] + pp[i] + ppd[i];

        cout<<"Total nilai         : "<<total_nilai[i]<<endl;

        rata_rata[i] = total_nilai[i] / 8;

        cout<<"Rata-rata           : "<<rata_rata[i]<<endl;
	}

}
