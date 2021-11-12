#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* NAMA	: SITI AYUNI	
	   KELAS : ILKOMP B
	   NPM : 2117051068	
	   */
	   
	int gaji_anda;
	int UMR_daerah;
	
	// INPUT
	cout << "=========================== CEK STATUS GAJI ANDA TERHADAP UMR DAERAH DISINI ========================";
	cout<< endl << endl;  
    cout << " Masukkan Nominal Gaji Anda : "; 
	cin >>gaji_anda;
	cout << " Masukkan UMR Daerah Anda   : "; 
	cin >>UMR_daerah;
	 
	cout<< endl << endl;
	
	// OUPUT
	system (" color 3");
	
	cout << "================================== HASIL DARI PENCARIAN ANDA ===================================== " << endl;
	
	if ( gaji_anda < UMR_daerah) {
	     cout << "				SEMANGAT Gaji Anda di bawah UMR Daerah " << endl;
     }
    else if(gaji_anda == UMR_daerah){
         cout << " 				SELAMAT Gaji Anda setara dengan UMR Daerah " << endl;
     }
    else {
         cout << "				SELAMAT Gaji Anda di Atas UMR Daerah " << endl;
     }
     cout<< endl<< endl;
     
	 
      return 0;
}
