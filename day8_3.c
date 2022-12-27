#include<stdio.h>
void main()
{
    int a,b,c,i,sum=0;
    printf("enter a non -ve integer:");
    scanf("%d",&a);
    if((a/10)==0)
    printf("%d",a);
    else{
    while((a/10)!=0)
    {
        sum=0;
        while(a>0)
        {
            sum=sum+(a%10);
            a=a/10;
        }
        if ((sum/10)!=0)
        a=sum;
    }}
    printf("%d",sum);
}