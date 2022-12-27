#include<stdio.h>
void sum_fact(void);
void main()
{
    sum_fact();
}
void sum_fact()
{
    int n,i,a=1,b=2,c=3,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(a*b*c);
        a++;
        b++;
        c++;
    }
    printf("sum=%d",sum);
}