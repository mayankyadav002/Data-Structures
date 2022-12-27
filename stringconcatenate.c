#include<stdio.h>
#include<string.h>
void string_concatenate(char*,char*);
void main()
{
    char s1[20];
    char s2[20];
    char a;
    printf("enter first string:");
    gets(s1);
    printf("enter second string:");
    gets(s2);
    string_concatenate(s1,s2);
    printf("after concatenation:%s",s1);
}
void string_concatenate(char*a,char*b)
{
    int i,len1,len2;
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<len2;i++)
    {
        *(a+len1+i)=*(b+i); 
    }
    *(a+len1+len2)='\0';
}