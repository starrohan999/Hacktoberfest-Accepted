//cpp program to reverse a string using recursion
#include<bits/stdc++.h>
using namespace std;
void reverse(string s,int n)
{
	cout<<s[n-1];			//printing the last character	
	if(n==0) 				//base case
	return;
	reverse(s,n-1);
}
int main()
{
	string s;
	cout<<"enter string to be reversed\n";
	cin>>s;
	reverse(s,s.length());	//calling the recursive function
}
