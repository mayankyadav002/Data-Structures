#include <stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n,p,q;
    printf("enter order of 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("enter elements of 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter order of 2nd matrix:");
    scanf("%d %d", &p,&q);
    printf("enter elements of 2nd matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of matrices is:\n");
    for(i=0;i<m;i++)
    {  
        for(j=0;j<n;j++)    
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");    
    }
}