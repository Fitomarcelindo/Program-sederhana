# Program-sederhana
Program Toko Kelontong 
#include<iostream>
using namespace std;

int main(){
	int beras,susu,indomie,sarden,oreo,telor,sunlight,wipol,kerupuk,blueband,minyak
	,tepung,total_harga;
	int jml_beras,jml_susu,jml_indomie,jml_sarden;
	string ulang;
	 
	beras = 10000;
	susu = 5000;
	indomie = 3000;
	sarden = 7000;
	
	do{
	
	cout<<"		SELAMAT DATANG SELAMAT BERBELANJA		"<<endl;
	cout<<endl;
	cout<<"1.beras \t = "<<"Rp."<<beras<<"\t /pcs "<<endl;
	cout<<"2.susu \t\t = "<<"RP."<<susu<<" \t /pcs "<<endl;
	cout<<"3.indomie \t = "<<"Rp."<<indomie<<"\t /pcs "<<endl;
	cout<<"4.sarden \t = "<<"Rp."<<sarden<<" \t /pcs "<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	
	cout<<"masukkan jumlah beras \t\t: ";
	cin>>jml_beras;
	cout<<"masukkan jumlah susu \t\t: ";
	cin>>jml_susu;
	cout<<"masukkan jumlah indomie \t: ";
	cin>>jml_indomie;
	cout<<"masukkan jumlah sarden \t\t: ";
	cin>>jml_sarden;
	cout<<"=============================================="<<endl;
	cout<<endl;
	
	cout<<"harga total beras	\t: "<<"Rp. "<<beras*jml_beras<<endl;
	cout<<"harga total susu		: "<<"Rp. "<<susu*jml_susu<<endl;
	cout<<"harga total indomie	\t: "<<"Rp. "<<indomie*jml_indomie<<endl;
	cout<<"harga total sarden	\t: "<<"Rp. "<<sarden*jml_sarden<<endl;
	cout<<"=============================================="<<endl;
	cout<<endl;
	
	total_harga = (beras*jml_beras) + (susu*jml_susu) + (indomie*jml_indomie) + (sarden*jml_sarden);
	cout<<"total belanja anda adalah \t: "<<"Rp. "<<total_harga<<endl;
	cout<<endl;
	
	cout<<"=============================================="<<endl;
	cout<<endl;
	
	cout<<"apakah anda ingin berbelanja lagi (y / n) : ";
	cin>>ulang;
	
	cout<<endl;
	cout<<"=============================================="<<endl;
	
	}while(ulang== "y");
	
	cout<<"terima kasih atas kunjungan anda "<<endl;	
}
