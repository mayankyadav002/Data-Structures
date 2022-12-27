#include<stdio.h>
void main()
{
    int a[10],b[10],u[20],i,j,n1,n2,k=0;
    printf("enter no. of elements:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("enter elements of set A:");
        scanf("%d",&a[i]);
    }
    printf("enter no. of elements:");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("enter elements of set B:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<k;j++)
        {
            if(u[j]==a[i])
            break;
        }
        if(j==k)
        {
            u[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n2;i++)
    {
        for(j=0;j<k;j++)
        {
            if(u[j]==b[i])
            break;
        }
        if(j==k)
        {
            u[k]=b[i];
            k++;
        }
    }
    printf("the unoin of two sets a & b is\n"); 
    for(j=0;j<k;j++)
    {
        printf(" %d ",u[j]);
    }
 }