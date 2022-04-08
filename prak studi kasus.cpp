#include <iostream>
using namespace std;
int main()
{
	int beli, bayar, diskon,jumlah[50],harga[50],total[50];
	string nama[50];
	float tot;
	
	cout<<"PROGRAM KASIR KEDAI AYAM DIR"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<<"Masukkan Jumlah Beli Ayam: "<<endl;
	cin>>beli;
	
	for (int i=0; i<beli;i++){
	
	cout<<endl;
	cout<<"Masukkan Menu Ke - "<<i+1<<endl;
	cout<<endl;
	
	cout<<"Menu Ayam	: ";
	cin>>nama[i];
	
	cout<<"Jumlah		: ";
	cin>>jumlah[i];
	
	cout<<"Harga		: ";
	cin>>harga[i];
	
	total[i]=jumlah[i]*harga[i];
	tot += total[i];
	
}
cout<<endl;
cout<<"STRUK BELANJA KEDAI AYAM DIR"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"No  Barang	Jumlah	 Harga      Sub Total"<<endl;
for(int i=0;i<beli;i++){
	cout<<i+1<<"\t"<<	nama[i]<<"\t"<<	jumlah[i]<<"\t"<<	harga[i]<<"\t"<<	total[i]<<endl;
}
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`"<<endl;

if(tot>=45000){
	diskon=0.1*tot;
}
else {
	diskon= 0;
}

cout<<"Jumlah Bayar	: Rp."<<tot<<endl;
cout<<"Diskon		: Rp."<<diskon<<endl;
cout<<"Total Bayar	: Rp."<<tot-diskon<<endl;
}
