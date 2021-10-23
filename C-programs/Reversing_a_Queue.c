#include <stdio.h>
int f = -1,r = -1;
int q[50];
void insert(int data,int l)
{
	if(r==l-1){
		printf("Queue is full");
	}
	else
{
if(f==-1)
f=0;
r++;
q[r]=data;
}
}
void print()
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("\n%d",q[i]);
	}
}
void reverse()
{
	int i,j,t;
	for(i=f,j=r;i<j;i++,j--){
		t = q[i];
		q[i] = q[j];
		q[j] = t;
	}
}
void main()
{
	int n,i=0,t;
	printf("Enter the size of Queue :");
	scanf("%d",&n);
	printf("\nEnter the data for Queue :");
	while(i<n){
		scanf("%d",&t);
		insert(t,n);
		i++;
	}
	reverse();
	printf("\nQueue after reversing:-");
	print();
	
}
