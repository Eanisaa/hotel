#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;



int main(){
//	char nama[20]; 
	char kode_kamar, kategori,menu;
	int kode_kelas,hari;
	string nama_kamar,nama;
	int long harga,total_harga,total_bayar;
	float administrasi;
	administrasi=35000;
	
	awal:
		system("cls");
	cout<<"\t\t\t\t HOTEL PONDOK INDAH\n";
	cout<<"\t\t\t\t____________________\n\n\n";
	cout<<" KODE \t\t KAMAR \t\t KELAS \t\t KATEGORI \t\t HARGA/MALAM\n";
	cout<<"_______________________________________________________________________________________________\n";
	cout<<" \t\t Anyelir \t 1 \t\t VIP \t\t\t 350.000\n";
	cout<<" A \t\t  \t\t 2 \t\t Kelas 1 \t\t 250.000\n";
	cout<<" \t\t  \t\t 3 \t\t Kelas 2 \t\t 150.000\n";
	cout<<"_______________________________________________________________________________________________\n";
	cout<<" \t\t Cempaka \t 1 \t\t VIP \t\t\t 350.000\n";
	cout<<" C \t\t  \t\t 2 \t\t Kelas 1 \t\t 250.000\n";
	cout<<" \t\t  \t\t 3 \t\t Kelas 2 \t\t 150.000\n";
	cout<<"_______________________________________________________________________________________________\n";
	cout<<" \t\t Melati \t 1 \t\t VIP \t\t\t 350.000\n";
	cout<<" M \t\t  \t\t 2 \t\t Kelas 1 \t\t 250.000\n";
	cout<<" \t\t  \t\t 3 \t\t Kelas 2 \t\t 150.000\n";
	cout<<"_______________________________________________________________________________________________\n\n\n";
	
	cout<<"Nama penyewa\t\t: ";cin>>nama;
	cout<<"Kode kamar(A/C/M)\t: ";cin>>kode_kamar;
	cout<<"Kode kelas(1/2/3)\t: ";cin>>kode_kelas;
	cout<<"Lama menginap\t\t: ";cin>>hari;
	cout<<"__________________________________________\n\n\n";
	
	cout<<"Nama penyewa\t\t: "<<nama<<endl;
	cout<<"Kode kamar\t\t: "<<kode_kamar<<endl;
	switch(kode_kamar){
		case 'A':
			nama_kamar="Anyelir";
			if(kode_kelas==1){
				
				harga=350000;
			}else if(kode_kelas==2){
				
				harga=250000;
			}else if(kode_kelas==3){
				
				harga=150000;
			}
			break;
		case 'C':
			nama_kamar="Cempaka";
			if(kode_kelas==1){
				harga=350000;
			}else if(kode_kelas==2){
				harga=200000;
			}else if(kode_kelas==3){
				harga=150000;
			}
			break;
		case 'M':
			nama_kamar="Melati";
			if(kode_kelas==1){
				harga=350000;
			}else if(kode_kelas==2){
				harga=250000;
			}else if(kode_kelas==3){
				harga=150000;
			}
			break;
	}
	
	cout<<"Nama kamar/kelas\t: "<<nama_kamar<<"/"<<kode_kelas<<endl;
	cout<<"Harga kamar/malam\t: "<<"Rp."<<harga<<endl;
	cout<<"Lama menginap\t\t: "<<hari<<endl;
	total_harga=harga*hari;
	cout<<"Total harga\t\t: "<<"Rp."<<total_harga<<endl;
	cout<<"Biaya Administrasi\t: "<<"Rp."<<administrasi<<endl;
	total_bayar=total_harga+administrasi;
	cout<<"Total bayar\t\t: "<<"Rp."<<total_bayar<<endl;
	
	if(hari==10){
		cout<<"Souvenir\t\t: Free kolam renang.";
	}else if(hari>10){
		cout<<"Souvenir\t\t: Free fasilitas hotel.";
	}else{
		cout<<"Souvenir\t\t: No souvenir.";
	}
	
	cout<<"\n\n\n";
	cout<<"Kembali ke menu utama(y/n)\t: ";cin>>menu;
	if(menu=='y'){
		goto awal;
	}else if(menu=='n'){
		cout<<"selesai";
	}
return 0;
}
