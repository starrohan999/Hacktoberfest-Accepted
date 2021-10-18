#include<bits/stdc++.h>
using namespace std;
vector<int> build_seg(vector<int> &a)
{
	int n=a.size();
	vector<int> seg(2*n);
	for(int i=n;i<2*n;i++)
		seg[i]=a[i-n];
	for(int i=n-1;i>=1;i--)
	{
		seg[i]=seg[2*i]+seg[2*i+1];
	}
	return seg;

}
void update_seg(vector<int> &seg,int index, int val)
{
	int n=seg.size()/2;
	int i=index+n;
	seg[i]=val;
	i/=2;
	while(i)
	{
		//
		seg[i]=seg[2*i]+seg[2*i+1];
		i/=2;
	}

}
int rsq(int left, int right, vector<int> &seg)
{
	int n=seg.size()/2;
	int sm=0;
	left+=n;
	right+=n+1; //making it exclusive
	while(left<right)
	{
		if(left&1)
		{
			sm+=seg[left];
			left++;
		}
		if(right&1)
		{
			//bcuz exclusive h isliye..r-- 
			right--;
			sm+=seg[right];
		}
		left/=2;
		right/=2;
	}
	return sm;
}

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> seg= build_seg(a);
	for(int i=0;i<seg.size();i++)
		cout<<seg[i]<<" ";
	cout<<endl<<rmq(0,3,seg)<<endl;
}