#include<stdio.h>
#include<string.h>
int string_length(char*);
void main()
{
    int l;
    char name[20];
    printf("enter string:");
    gets(name);
    l=string_length(name);
    printf("%d",l);
}
int string_length(char*a)
{
    int count=0;
    while(*a!='\0')
    {
        count++;
        a++;
    }
    return count;
}