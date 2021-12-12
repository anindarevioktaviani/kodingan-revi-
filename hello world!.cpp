#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string a, Nama,Jumlah_Pinjaman, Cincilan_Perbulan, Lama_Pinjaman;
    
	cin>>(Nama);
	int jumlah_Pinjaman;
	cin>>(Jumlah_Pinjaman);
	float Bunga_Perbulan;
	cin>>(Bunga_Perbulan);
	cin>>(Lama_Pinjaman);
	
	
	cout<<"Nama ="<< (Nama) <<endl;
	cout<<"Cicilan Perbulan = Rp." <<Jumlah_Pinjaman<<endl;    
	cout<<"Bunga Perbulan = " <<Bunga_Perbulan << "%" <<endl;
	cout<<"Lama Pinjaman = " <<Lama_Pinjaman << "Bulan" <<endl;
}
