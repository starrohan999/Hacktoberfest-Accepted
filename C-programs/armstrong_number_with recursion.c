#include<stdio.h>
#include<math.h>
int armstrong_rec(int);
int main()
{
  int n,temp,recvalue;
  printf("enter number \n");
  scanf("%d",&n);
  temp=n;
  recvalue = armstrong_rec(n);
  if(temp == recvalue)
    printf("given number is an armstrong number. \n");
  else
    printf("given number is not an armstrong number. \n");
  return 0;
}

int armstrong_rec(int n)
{
  static int r,sum=0;
  if(n>0)
  {
    r = n%10;
    sum = sum+pow(r,3);
    armstrong_rec(n/10);
    return sum;
  }
  else
    return 0;
}
