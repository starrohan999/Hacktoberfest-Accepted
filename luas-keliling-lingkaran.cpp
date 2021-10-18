#include <iostream>
using namespace std; //bellabeen
typedef float coba;
int main () {
	coba jari;
	coba luas;
	coba kell;
	coba phi = 3.14;
	cout<<"Masukkan jari jari : ";
	cin>>jari;
	luas = phi*jari*jari;
	kell = 2*phi*jari;
	cout<<"Hasil luas : \n"<<luas;
	cout<<"Hasil kell : \n"<<kell;
	return 0;	
}