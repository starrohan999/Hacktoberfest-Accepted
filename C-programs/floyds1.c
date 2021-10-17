#include<stdio.h>
void main()
{
	int a=1,i,j,n;
	printf("Enter number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("* ");
			/*printf("%d ",a);
			a++;*/
		}
		printf("\n");
	}
}
