/*sum of n natural with rec*/
#include<stdio.h>
int main()
{
	int n,c;
	printf("Enter value of n");
	scanf("%d",&n);
     c=sumnat(n);
     printf("%d",c);
	
	
}

int sumnat(int n)
{
	if(n==0)
	 return 0;
	 else 
	 return n+sumnat(n-1);
	 
}

