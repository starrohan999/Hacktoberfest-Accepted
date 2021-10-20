#include <bits/stdc++.h>
using namespace std;


int main() {
	// code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int n=0,t;
	    for(int i=0;i<5;i++){
	        cin>>t;
	        if(t==0){
	            
	        }
	        else if(t==1){
	            n++;
	        }
	        else{
	            n--;
	        }
	    }
	    if(n==0){
	        cout<<"DRAW"<<endl;
	    }
	    else if(n>0){
	        cout<<"INDIA"<<endl;
	    }
	    else{
	         cout<<"ENGLAND"<<endl;
	    }
	    
	}
	return 0;
}
