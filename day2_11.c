                                              //Program for Set Difference(A-B)

#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,n1,n2,k=0;
    printf("enter no. of elements in set A:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("enter elements of set A:");
        scanf("%d",&a[i]);
    }
    printf("enter no. of elements in set B:");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("enter elements of set B:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        k=0;
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                k++;
                break;
            }
        }
        if(k==0)
        printf("%d ",a[i]);
    } 
}                      

                                             //Program for Set Difference(B-A)

#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,n1,n2,k=0;
    printf("enter no. of elements in set A:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("enter elements of set A:");
        scanf("%d",&a[i]);
    }
    printf("enter no. of elements in set B:");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("enter elements of set B:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        k=0;
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                k++;
                break;
            }
        }
        if(k==0)
        printf("%d ",b[i]);
    } 
}  