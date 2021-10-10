#include<bits/stdc++.h>

using namespace std;

int main()

{
    string s;
     cin>>s;                 
    long int i,z=0,l=0,r=0,x=0,y=0;
    for(i=0;i<s.length();i++)
    {
      if(s[i]=='(')
      l++;
      else
      r++;
      }                           //calculates the no. of left and right parenthesis in l & r respectively

if(l!=r)
cout<<"0";            //if l and r are unequal it can never be in a balanced form in any no. of rotations
else
  {
l=0;                     

for(i=0;i<s.length();i++)
{
  if(s[i]=='(')
  l++;
  else
  l--;

  if(l<y)
  {
    y=l;
    x=i+1;
  }

} 
  reverse(s.begin(), s.begin()+x);
  reverse(s.begin()+x, s.end());
  reverse(s.begin(), s.end());

l=0;

for(i=0;i<s.length();i++)
{
  if(s[i]=='(')
  l++;
  else
  l--;
if(l==0)
z++;
}
cout<<z;
}
return 0;
}