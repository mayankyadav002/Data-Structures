#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,r1,r2,d;
    printf("enter value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("roots are: %d %d",r1,r2);
}