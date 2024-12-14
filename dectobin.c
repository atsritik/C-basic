#include<stdio.h>
int dectobin(int);
void main()
{
	int n,s;
	scanf("%d",&n);
	s=dectobin(n);
	printf("%d",s);
	
}

int dectobin(int n)
{
	int binary;
	if(n==0)
	    return 0;
	    else 
	    return n%2+10*dectobin(n/2);
	
	 
}
