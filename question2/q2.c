#include<stdio.h>
#define MAXLINE 1000

int input(char line[],int lim);
void mystrcat(char *s, char *t);

int main(void)
{
    char s[MAXLINE],t[MAXLINE];
    printf("Insert string s: ");
    input(s,MAXLINE);
    printf("Insert string t: ");
    input(t,MAXLINE);
    mystrcat(s,t);
    printf("Final string s: %s", s);
    return 0;
}

int input(char s[],int lim)
{
    int i,j;
    
    for(i=0;i<lim-1 && (j=getchar()) !=EOF && j!='\n';++i)
        s[i] = j;
    
    if(j == '\n')
    {
        s[i] = j;
        ++i;
    }
    
    s[i] = '\0';

    return i;
}

void mystrcat(char *s,char *t)
{
    while(*s!='\0')
        s++;
    while((*s=*t)!='\0')
    {   
        s++;
        t++;
    }
}
