#include<iostream>
#include<string>
using namespace std;
bool issub(string &s1,string &s2,int n,int m){
int j=0;
for(int i=0;i<n&&j<m;i++){
    if(s1[i]==s2[j])
    j++;
}
return (j==m);
}
int main(){
int n,m;
string s1,s2;
cin>>n>>m;
getline(cin,s1);
getline(cin,s2);
if(issub(s1,s2,n,m))
cout<<"yes";
else
cout<<"no";
}