/*#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10];
    char s2[10];
    printf("enter first string:");
    gets(s1);
    printf("enter second string:");
    gets(s2);
    if(strcmp(s1,s2)==0)
    printf("same string");
    else
    printf("string not same");
}

-------------------------------OWN LOGIC-----------------------------*/
#include<string.h>
#include<stdio.h>
void str_cmp(char*,char*);
void str_cmp(char *s1,char *s2)
{
    int i,k=0;
    for(i=0; s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            k=1;
            break;
        }
    }
    if(k==1)
    printf("not same");
    else
    printf("not same string");
}
void main()
{
    char s1[10];
    char s2[10]; 
    printf("enter first string:");
    gets(s1);
    printf("enter second string:");
    gets(s2);
    str_cmp(s1,s2);
}