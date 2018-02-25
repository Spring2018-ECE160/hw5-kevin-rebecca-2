#include<stdio.h>
#define MAXLINE 1000

int input(char line[],int lim);
void mystrncpy(char *s, char *t, int n);

int main(void)
{
    int n = 4;
    char s[MAXLINE],t[MAXLINE];
    printf("Insert string t: ");
    input(t,MAXLINE);
    //printf("Insert string s: ");
    //input(s,MAXLINE);
    mystrncpy(s,t,n);
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

void mystrncpy(char *s,char *t, int n)
{
    for(int i = 0; i < n; i++)
    {   
	*s=*t;
        s++;
        t++;
    }
    /*while( *s != '\0' )
    {
	*s= ' ';
	s++;
    }*/
//NOTE: The code that is commented out is because at first I was unsure whether or not we were supposed to copy n characters of t to a blank string or to a string already containing characters. Uncommenting all this code allows the user to input a string, s, and still get the same output for s in the end regardless of what s and t and n are. However, allowing the user to input a string, s, and not putting in the while loop will allow the characters in string s greater than position n remain unchanged.    
}
