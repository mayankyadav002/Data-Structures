#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,i,k;
    printf("enter value of A and B:\n");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("enter k:");
    scanf("%d",&k);
    for(i=1;i<k;i++)
    c=c/10;
    c=c%10;
    printf("%d",c);
}