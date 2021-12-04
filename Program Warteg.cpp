#include<iostream> 
using namespace std;

int main(){
	int pilihan,nasi_ayam, nasi_ikan, nasi_goreng, nasi_kuning,start_prc, pesanan,back,pay;
	string item,looping,inp;
	double disc,final,uang;
	disc = 0.02;
	bool log = true;
	
	nasi_ayam = 15000;
	nasi_ikan = 12000;
	nasi_goreng = 13000;
	nasi_kuning = 13000;
	
	do{
		cout<<" | FITTO MARTCELLINDO NIM 202131001 | "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"|              MENU MAKANAN                 |"<<endl;
		cout<<"-------------------------------------------"<<endl;
	
		cout<<"pilih menu anda "<<endl;
		cout<<" |1. nasi + ayam| "<<"Rp."<<nasi_ayam<<endl;
		cout<<" |2. nasi + ikan| "<<"Rp."<<nasi_ikan<<endl;
		cout<<" |3. nasi goreng| "<<"Rp."<<nasi_goreng<<endl;
		cout<<" |4. nasi kuning| "<<"Rp."<<nasi_kuning<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<" silahkan pilih menu anda = ";
		cin>>pilihan;
	
	
		switch(pilihan){
			case 1: 
				cout<<" nasi + ayam  \t\t\t = Rp. 15.000 "<<endl;
				cout<<" masukan jumlah pesanan \t = ";
				cin>>pesanan;
				start_prc = pesanan * nasi_ayam;
				cout<<" total bayar \t\t\t = "<<"Rp. "<<start_prc<<endl;
				break;
			case 2 :
				item = "2. nasi + ikan ";
				cout<<" nasi + ikan \t\t\t = Rp. 12.000 "<<endl;
				cout<<" masukan jumlah pesanan \t = ";
				cin>>pesanan;
				start_prc = pesanan * nasi_ikan;
				cout<<" total bayar \t\t\t = "<<"Rp. "<<start_prc<<endl;
				break;
		case 3 :
				item = "2. nasi goreng ";
				cout<<" nasi goreng \t\t\t = Rp. 13.000 "<<endl;
				cout<<" masukan jumlah pesanan \t = ";
				cin>>pesanan;
				start_prc = pesanan * nasi_goreng;
				cout<<"total bayar \t\t\t = "<<"Rp. "<<start_prc<<endl;
				break;
		case 4 :
				item = "2. nasi kuning";
				cout<<" nasi kuning \t\t\t = Rp. 13.000 "<<endl;
				cout<<" masukan jumlah pesanan \t = ";
				cin>>pesanan;
				start_prc = pesanan * nasi_kuning;
				cout<<"total bayar \t\t\t = "<<"Rp. "<<start_prc<<endl;
				break;
		default :
		cout<<" maaf menu yang anda pesan tidak tersedia "<<endl;
	}
	
		disc = start_prc * 0.02;
	
		if (start_prc > 30000){
		final = start_prc - disc;
		cout<<" | Selamat Amda Mendapatakan Diskon | "<<endl;
		}else {
		final = start_prc;
		}
		cout<<"-------------------------------------------"<<endl;
		cout<<" jumlah yang harus dibayarkan \t = "<<" Rp. "<<final<<endl;
		cout<<" masukkan jumlah uang anda \t = "<<" Rp. ";cin>>pay;
		cout<<"-------------------------------------------"<<endl;
		back = pay - final;
		cout<<" uang kembalian \t\t = "<<" Rp. "<<back;
		cout<<endl;
		
		cout<<"-------------------------------------------"<<endl;
		
		cout<<" Apakah anda ingin membeli lagi? (y/t) ";
		cin>>looping;
		
		if(looping == "T" || looping == "t") {
		log = false;
		}
		
	}while (log);
	
	
	return  0;
	
}
