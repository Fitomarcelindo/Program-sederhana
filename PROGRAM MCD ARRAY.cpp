#include <iostream>
#include <string>

using namespace std;

void menu() {
	cout<<endl;
	cout<<" MAC DONALD SULTAN AGUNG "<<endl;
	cout<<" DAFTAR  MENU MAKANAN "<<endl;
	cout<<" 1. | PAKET PANAS 1 \t = Rp. 18.0000 | "<<endl;
	cout<<" 2. | PAKET PANAS 2 \t = Rp. 28.0000 | "<<endl;
	cout<<" 3. | PAKET MANTAP 1 \t = Rp. 32.0000 | "<<endl;
	cout<<" 4. | PAKET MANTAP 2 \t = Rp. 42.0000 | "<<endl;
	cout<<"======================================"<<endl;
	cout<<" DAFTAR  MENU  MINUM "<<endl;
	cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
	cout<<" 2. | PEPSI \t\t\t = Rp. 5000 |"<<endl;
	cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
	cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
	cout<<"======================================"<<endl;
};

int main(){
	int pilihan,menu_mac, menu_drink, pesanan, total, pay;
	long int harga[4] = {18000, 28000, 32000, 42000};
	long int harga_a [4] = { 7000,  5000, 8000, 5000};
	double disc, final, back;
	string loop,y;
	disc = 0.05;
	menu();
	
	cout<<" PILIH MENU MAKANAN ANDA = ";
	cin>>menu_mac;
	switch (menu_mac){
		do{
			case 1 :
			cout<<" 1. | PAKET PANAS 1 \t = Rp. 18.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = harga [0] * pesanan;
			cout<<" total bayar \t\t = Rp. "<<total<<endl;
			
				if(total > 30000) {
				final = total - (total*disc);
				} else {
				final = total;
				}
					cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
					cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
					back = pay-final;
					cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
					cout<<"======================================"<<endl;
					cout<<endl;
					cout<<" Apakah anda ingin memasan minum juga? (y/n) = "<<endl;
					cout<<" masukan pilihan : ";
					cin>>pilihan;
					cout<<endl;
						if(pilihan == 1 ){
							cout<<" Daftar minuman "<<endl;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" 2. | PEPSI \t\t\t = Rp. 5000 | "<<endl;
							cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
							cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
							cout<<" Pilih minuman anda \t\t = ";
							cin>>menu_drink;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" Masukkan jumlah pesanan \t = ";
							cin>>pesanan;
							total = harga_a [0] * pesanan;
							cout<<" total drink \t\t\t = Rp.  "<<total<<endl;
							cout<<endl;
								if(total > 30000) {
								final = total - (total*disc);
								} else {
								final = total;
								}
								cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
								cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
								back = pay-final;
								cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
						}
						else if (pilihan == 2 ){
							cout<<" oke baik kak terima kasih hati-hati dijalan kak ";
						}
						else{
							cout<<" masukkan pilihan dengan benar ";
						}
			cout<<" Apakah anda ingin memesan lagi ? = (y/n) ";
			cin>>loop;
		}while (loop== "y");
			cout<<" terima kasih titidj ";
			break;
		case 2 :
			cout<<" 2. | PAKET PANAS 2 \t = Rp. 28.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = harga [1] * pesanan;
			cout<<" total bayar \t\t = Rp. "<<total<<endl;
			cout<<endl;
				if(total > 30000) {
				final = total - (total*disc);
				} else {
				final = total;
				}
					cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
					cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
					back = pay-final;
					cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
					cout<<"======================================"<<endl;
					cout<<endl;
					cout<<" Apakah anda ingin memasan minum juga? (y/n) = "<<endl;
					cout<<" masukan pilihan : ";
					cin>>pilihan;
					cout<<endl;
						if(pilihan == 1 ){
							cout<<" Daftar minuman "<<endl;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" 2. | PEPSI \t\t\t = Rp. 5000 | "<<endl;
							cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
							cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
							cout<<" Pilih minuman anda \t\t = ";
							cin>>menu_drink;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" Masukkan jumlah pesanan \t = ";
							cin>>pesanan;
							total = harga_a [0] * pesanan;
							cout<<" total drink \t\t = Rp.  "<<total<<endl;
							cout<<endl;
								if(total > 30000) {
								final = total - (total*disc);
								} else {
								final = total;
								}
								cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
								cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
								back = pay-final;
								cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
						}
						else if (pilihan == 2 ){
							cout<<" oke baik kak terima kasih ";
						}
						else{
							cout<<" masukkan pilihan dengan benar ";
						}
			break;
		case 3 :
			cout<<" 3. | PAKET MANTAP 1 \t = Rp. 32.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = harga [2] * pesanan;
			cout<<" total bayar \t\t = Rp. "<<total<<endl;
			cout<<endl;
				if(total > 30000) {
				final = total - (total*disc);
				} else {
				final = total;
				}
					cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
					cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
					back = pay-final;
					cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
					cout<<"======================================"<<endl;
					cout<<endl;
					cout<<" Apakah anda ingin memasan minum juga? (y/n) = "<<endl;
					cout<<" masukan pilihan : ";
					cin>>pilihan;
					cout<<endl;
						if(pilihan == 1 ){
							cout<<" Daftar minuman "<<endl;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" 2. | PEPSI \t\t\t = Rp. 5000 | "<<endl;
							cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
							cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
							cout<<" Pilih minuman anda \t\t = ";
							cin>>menu_drink;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" Masukkan jumlah pesanan \t = ";
							cin>>pesanan;
							total = harga_a [0] * pesanan;
							cout<<" total drink \t\t\t = Rp.  "<<total<<endl;
							cout<<endl;
								if(total > 30000) {
								final = total - (total*disc);
								} else {
								final = total;
								}
								cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
								cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
								back = pay-final;
								cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
						}
						else if (pilihan == 2 ){
							cout<<" oke baik kak terima kasih ";
						}
						else{
							cout<<" masukkan pilihan dengan benar ";
						}
			break;
		case 4 :
			cout<<" 4. | PAKET MANTAP 2 \t = Rp. 42.0000 | "<<endl;
			cout<<" Masukkan jumlah pesanan = ";
			cin>>pesanan;
			total = harga [3] * pesanan;
			cout<<" total bayar \t\t = Rp. "<<total<<endl;
			cout<<endl;
				if(total > 30000) {
				final = total - (total*disc);
				} else {
				final = total;
				}
					cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
					cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
					back = pay-final;
					cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
					cout<<"======================================"<<endl;
					cout<<endl;
					cout<<" Apakah anda ingin memasan minum juga? (y/n) = "<<endl;
					cout<<" masukan pilihan : ";
					cin>>pilihan;
					cout<<endl;
						if(pilihan == 1 ){
							cout<<" Daftar minuman "<<endl;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" 2. | PEPSI \t\t\t = Rp. 5000 | "<<endl;
							cout<<" 3. | CHOCOLATE \t\t = Rp. 8000 | "<<endl;
							cout<<" 4. | TEH BOTOl \t\t = Rp. 6000 | "<<endl;
							cout<<" Pilih minuman anda \t\t = ";
							cin>>menu_drink;
							cout<<" 1. | MOCCA FLOAT \t\t = Rp. 7000 | "<<endl;
							cout<<" Masukkan jumlah pesanan \t = ";
							cin>>pesanan;
							total = harga_a [0] * pesanan;
							cout<<" total drink \t\t = Rp.  "<<total<<endl;
							cout<<endl;
								if(total > 30000) {
								final = total - (total*disc);
								} else {
								final = total;
								}
								cout<<"\n Jumlah yang harus Dibayarkan \t = "<<"Rp. "<<final;
							cout<<"\n Uang bayar \t\t\t = Rp. "; cin>>pay;
							back = pay-final;
							cout<<"\n Uang kembalian \t\t = Rp. "<<back<<endl;
						}
						else if (pilihan == 2 ){
							cout<<" oke baik kak terima kasih ";
						}
						else{
							cout<<" masukkan pilihan dengan benar ";
						}
			break;
			cout<<endl;
		default :
			cout<<" Maaf menu yang anda ingin belum ready :) "<<endl;
	}
	
}
