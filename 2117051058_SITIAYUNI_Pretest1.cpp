#include<iostream>
using namespace std;
int main(){
	string nama;
	string alamat;
	string email;
	string telepon;
	
	//input
	cout<<"Masukkan Data Pelanggan Dibawah Ini"<<endl;
	cout<<"Nama Pelanggan  : ";
	getline(cin,nama);
	cout<<"Alamat Rumah    : ";
	getline(cin,alamat);
	cout<<"Email Pelanggan : ";
	getline(cin,email);
	cout<<"Nomor Telepon   : ";
	getline(cin,telepon);
	
	cout<<"\n\n";
	
	//output
	cout<<"Masukkan Data Pelanggan Dibawah Ini"<<endl;
	cout<<"Nama Pelanggan  : "<<nama<<endl;
	cout<<"Alamat Rumah    : "<<alamat<<endl;
	cout<<"Email Pelanggan : "<<email<<endl;
	cout<<"Nomor Telepon   : "<<telepon<<endl;
	return 0;
}
