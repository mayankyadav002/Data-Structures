#include<stdio.h>
int ternary_search(int arr[],int n,int x) {
    int beg=0,end=n-1,mid1,mid2;
    while(beg<=end){
        int mid1=(end-beg)/3+beg;
        int mid2=2*(end - beg)/3+beg;
        if(x==arr[mid1])
        return mid1;
        else if(x==arr[mid2])
        return mid2;
        else if(x<arr[mid1])
        end=mid1-1;
        else if(x<arr[mid2]){
            beg=mid1+1;
            end=mid2-1;
        }
        else 
        beg=mid2+1;
    }
    return -1;
}
void main()
{
    int arr[]={16,20,21,30,35,60,72,81,99},n=9,i,x;
    printf("Enter element you want to search:");
    scanf("%d", &x);
    i=ternary_search(arr,n,x);
    if (i!=-1)
    printf("%d%s %d",x," is present at index",i);
    else
    printf("%d%s",x," is not present in the given array\n");
}