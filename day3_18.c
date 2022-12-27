#include <stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,m,n,p,q;
    printf("enter order of 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("enter order of 2nd matrix:");
    scanf("%d %d", &p,&q);
    if(n!=p)
    printf("multiplication not possible");
    else
    printf("enter elements of 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter elements of 2nd matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("Product of matrices is:\n");
    for(i=0;i<m;i++)
    {  
        for(j=0;j<n;j++)    
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");    
    }     
}