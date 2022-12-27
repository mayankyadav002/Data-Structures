#include<stdio.h>
void bubble(void);
void main()
{
    bubble();
}
void bubble()
{
    int a[10],n,i,j,k,temp;
    printf("enter no. of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        k=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                k=1;
            }
        }
        if(k==0)
        break;
    }
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
}