#include<stdio.h>
void main()
{
    int num,a,b=0;
    printf("enter any number");
    scanf("%d" ,&num);
     while (num!=0)
     {
          a=num%10;
          b=b*10+a;
          num=num/10;
     }
  printf("%d",b);
}