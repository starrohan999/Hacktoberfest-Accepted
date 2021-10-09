#include<iostream>
using namespace std;

int main(){
	char list[3];
	int p,c,m,n;
	
	cin>>n;
	for(int i=0;i<n;i++){
		c=0,p=0,m=0;
		for(int j=0;j<3;j++){
			cin>>list[j];
			if(list[j]=='P'){
				p=p+1;
			}
			if(list[j]=='C'){
				c=c+1;
			}
			if(list[j]=='M'){
				m=m+1;
			}
		}
		if(p==1 && c==1 && m==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
