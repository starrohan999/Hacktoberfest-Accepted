#include <iostream>
#include <waktu.h>

using namespace std;
float jam, menit, detik, s, m, h;
char konversi;
long OPERATOR;

int start () {
	cout<<"1. Konversi Jam"<<endl;
	cout<<"2. Konversi Menit"<<endl;
	cout<<"3. Konversi Detik"<<endl<<endl;
	cout<<"Masukan Menu : ";cin>>OPERATOR;
	switch(OPERATOR){
		case 1 :
        cout<<"Konversi Jam ke Menit dan Detik "<<endl<<endl;
        cout<<"Masukkan jumlah Jam : ";cin>>h;
		jam = h;
		menit = jamkemenit;
		detik = jamkedetik;
		cout<<"Jam ke jam : "<<jam<<endl;
		cout<<"Jam ke menit : "<<menit<<endl;
		cout<<"Jam ke detik : "<<detik<<endl;        
		break;
		
		case 2 :
        cout<<"Konversi Menit ke Jam dan Detik "<<endl<<endl;
        cout<<"Masukkan jumlah Menit : ";cin>>m;
		menit = m;
		jam = menitkejam;
		detik = menitkedetik;
	
		cout<<"Menit ke jam : "<<jam<<endl;
		cout<<"Menit ke menit : "<<menit<<endl;
		cout<<"Menit ke detik : "<<detik<<endl;
		break;
		
		case 3 :
		cout<<"Konversi Detik ke Menit dan Jam"<<endl<<endl;
		cout<<"Masukkan jumlah detik : ";cin>>s;
		cout<<endl;
		detik = s;
		jam = detikkejam;
		menit = detikkemenit;
	
	
		cout<<"Detik ke jam : "<<jam<<endl;
		cout<<"Detik ke menit : "<<menit<<endl;
		cout<<"Detik ke detik : "<<detik<<endl;
		break;
		}
		return 0;

}
