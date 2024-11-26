//sum of n numbers
#include<stdio.h>
void main()
{

int n,c;
printf("enter any number");
scanf("%d",&n);
c=sum(n);
printf("%d",c);
}

int sum(int n)
{
	if(n==0)
	return 0;
	else  
	return n+sum(n-1);
	
}
