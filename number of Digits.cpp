#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n;
     cin>>n;
     //One Way
     // string s=to_string(n);
     // cout<<s.size();
     int count=0;
     while(n>0)
     {
          count++;
          n=n/10;
     }
     cout<<count;
     return 0;
}