// number of connected components in a graph
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<=b;i++)

vi ar[100001];
int vis[100001];

void dfs(int i){
	vis[i]=1;
	for(int c : ar[i]){
		if(!vis[c])
			dfs(c);
	}
}

int main(){
  int v,e,a,b;	cin>>v>>e;
	FOR(i,1,e)	cin>>a>>b, ar[a].pb(b), ar[b].pb(a);
	int connected=0;

	FOR(i,1,v){
		if(!vis[i])
		{
		connected++;
		dfs(i); 
		}
	}
	cout<<connected<<endl;
	return 0;
}
