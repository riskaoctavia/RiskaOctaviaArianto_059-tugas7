#include<conio.h>
#include<iostream>
#include<fstream>

using namespace std;
int main()
{

		ofstream simpan;
		char nama_barang[30];
		int hrg, jum, tjum, total=0, p;
		
		simpan.open("FileDinamis.txt");
		for (int i=1; i<6; i++){
			cout<<"Pembelian Barang ke-"<<i<<endl;
			cout<<"======================="<<endl;
			cout<<"\n Masukan Nama Barang: ";cin>>nama_barang;
			cout<<"\n Masukan Harga: ";cin>>hrg;
			cout<<"\n Jumlah Barang: ";cin>>jum;
			cout<<endl;
			simpan<<"Nama Barang"<<nama_barang<<endl;
			simpan<<"Harga"<<hrg<<endl;
			simpan<<"Jumlah"<<jum<<endl;
			
			tjum=jum*hrg;
			total=total*tjum;
			
		ulang:
		cout<<"Ada barang lain lagi yang dibeli maks 5 (1/0)?: "; cin>>p;
		if (p==1){
			cout<<endl;
		}
		else if (p==0){
			goto next;
		}
		else{
			cout<<"Input yang anda masukkan salah"; goto ulang;
		}
		}
		next:
			simpan<<"			NOTA BELANJA		"<<endl;
			simpan<<"	TOKO BUKU GRALEKTROMEDIA	"<<endl;
			simpan<<"==============================="<<endl;
			simpan<<" No |	Nama Barang	|	Harga Satuan	|	Jumlah	|	Total Harga	|"<<endl;
			for(int i=1;i<<6;i++){
			simpan<<"| "<<i<<"| 	"<<nama_barang<<" |		"<<hrg<<"|		"<<jum<<"|		"<<tjum<<"|"<<endl;
			}
			simpan<<"==============================="<<endl;
			simpan<<"Total Harga (Rp.) 		|		"<<total<<"|"<<endl;
			simpan<<"==============================="<<endl;
		
		simpan.close();
		getch();
		return 0;
		
		
}

	
	
	
