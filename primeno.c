#include<stdio.h>
void main()
{
	int n,i;
	printf("enter a no.");
	scanf("%d",&n);
	
   for(i=2;i<=n-1;i++)
       if(n%i==0)
       break;
       
       if(i==n)
       printf("%d no. is prime",n);
       else
       printf("%d no. is not prime",n);


}
