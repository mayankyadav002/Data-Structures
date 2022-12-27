#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char s1[20];
    char s2[20];
    printf("enter first string:");
    gets(s1);
    printf("enter secomd string:");
    gets(s2);


    i=strcmp(s1,s2);
    printf("%d",i);


}