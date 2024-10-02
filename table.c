#include<stdio.h>
void main()
{
    int x,i=1,table;
    printf("enter any number");
    scanf("%d" ,&x);
     while (i<=10)
     {
        printf("%d \n", table=x*i);
        i++;
     }
}