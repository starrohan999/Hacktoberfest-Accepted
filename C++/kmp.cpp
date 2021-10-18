#include<bits/stdc++.h>
using namespace std;
//lps s[i]==s[curr]; i++,curr++,lps[i]=curr,,
// if(curr>0) curr=lps[curr]
// else i++ lps[i]=0
//example abcxxxxxabc
// - 0 0 0 0 0 0 0 00  0 .. 1 2 3 
struct trie
{
    trie* children[26];
    trie()
    {
        for(int i=0;i<26;i++)
            children[i]=NULL;
    }
};

vector<int> lps(string s)
{
    int n=s.length();
    vector<int> lps(n+1,0);
    lps[0]=-1;
    lps[1]=0;
    int i=1;
    int curr=0;
    while(i<n)
    {
        if(s[i]==s[curr])
        {
            
            i++;  
            curr++;
            lps[i]=curr;
        }
        else if(curr>0)
        {

            curr=lps[curr];
        }
        else
        {
            i++;
            lps[i]=0;
        }
    }
    return lps;

}
vector<int> kmp(string text,string pat)
{
    int t=text.length();
    int p=pat.length();
    int pt1=0,pt2=0;
    vector<int> ans;
    vector<int> lp =lps(pat);
    while(pt1<t)
    {
        if(text[pt1]==pat[pt2])
        {
            pt1++;
            pt2++;
            if(pt2==p)
            {
                ans.push_back(pt1-p);
                pt2=lp[pt2];
            }
        }
        else
        {
            pt2=lp[pt2];
            if(pt2<0)//-1
            {
                pt2++;
                pt1++;
            }
        }
    }
    return ans;
}
int main() 
{ 
    // string s;
    // cin>>s;
    // vector<int> v=lps(s);
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    // string t;
    // cin>>t;
    // cout<<endl;
    // vector<int> kmpres=kmp(s,t);
    // for(int i=0;i<kmpres.size();i++)
    //     cout<<kmpres[i]<<" ";
    cout<<"b22a"<<endl;
    trie *x= new trie();
    for(int i=0;i<26;i++)
    {
        if(x->children[i]==NULL)
            cout<<1<<endl;
    }
    
}