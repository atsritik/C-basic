#include<stdio.h>
void main()
{
	int a[20],i,n,search;
	printf("enter a size of an array");
	scanf("%d",&n);
	
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a search no.");
	scanf("%d",&search);
	 
	 for(i=0;i<n;i++)
	 {
	 
	   if(a[i]==search);
	    {
	    printf("%d",search);
	    break;
		}
     }
	
}
