#include<stdio.h>
double nCr(double n,double r,double d)
{
	if(n==1)
	   return(1);
	else 
	{
		
		if(r==0 && d==0)
		   return(n* nCr(n-1,1,1));
		else if(d==0)
		   return((n/r)*nCr(n-1,r-1,1));
		else if(r==0)
		    return((n/d)* nCr(n-1,1,d-1));
		else
		    return((n/(d*r)*nCr(n-1,r-1,d-1)));
	    
   }
}
void main()
{
	double n,r;
	printf("Enter n and r\n");
	scanf("%lf %lf",&n,&r);
	double ncr=nCr(n,r,n-r);
	printf("%lf",ncr);
	return;
}
