#include <bits/stdc++.h>
using namespace std;
vector<int> build_seg(vector<int> &a)
{
	int n=a.size();
	vector<int> seg(2*n);
	for(int i=n;i<2*n;i++)
	{
		seg[i]=a[i-n];
	}

	for(int i=n-1;i>=1;i--)
	{
		seg[i]=0;
	}
	return seg;
}
void range_update(vector<int> &seg, int left, int right,int diff)
{
	int n=seg.size()/2;
	left+=n;
	right+=n+1; //exclusive
	// can be of 2 variety .. we can absolute change the value at ith index to some value
	// this can be solved by storing time of updating, while retreiving select the one with most time.
	//or we can add diff to it.
	// cout<<left<<" "<<right<<endl;
	while(left<right)
	{
		if(left&1)
		{
			// cout<<left<<endl;
			// cout<<seg[left]<<" "<<diff<<endl;
			seg[left]+=diff;
			left++;
		}
		if(right&1)
		{
			right--;
			seg[right]+=diff;
		}
		left/=2;
		right/=2;

	}

}
int get_value(vector<int> &seg, int index)
{
	int n=seg.size()/2;
	int i=index+n;
	int sm=0;
	while(i)
	{
		sm+=seg[i];
		i>>=1;
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
	range_update(seg,0,4,1);
	// for(int i=0;i<2*n;i++)
	// 	cout<<seg[i]<<" ";
	range_update(seg,1,3,10);
	range_update(seg,3,3,-2);

	for(int i=0;i<n;i++)
	{
		cout<<get_value(seg,i)<<" ";
	}


}