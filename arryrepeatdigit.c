#include<stdio.h>
void main()
{
	int a[4],i,num,rep=0;
	printf("Enter an arry");
    	for(i=0;i<5;i++)
         	scanf("%d",&a[i]);
         	
         	printf("Repeat digit");
         	   scanf("%d",&num);
         	
         	for(i=0;i<5;i++)
         	    {
         	    	if(a[i]==num)
         	    	 rep=rep+1;
				 }
	 printf("digit repeats  in an array= %d",rep);
	 
}
