#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 1000

int strend(char s[MAXSIZE], char t[MAXSIZE]);

void main(){

char s[10] = "SUNFLOWER\0";
char t[7] = "FLOWER\0";

if (strend(s,t) == 1)
	printf("%s does occur at the end of %s\n", t, s);
else
	printf("%s does not occur at the end of %s\n", t, s);

char a[8] = "rebecca\0";
char b[4] = "cca\0";
strend(a, b);

if (strend(a,b) == 1)
        printf("%s does occur at the end of %s\n", b, a);
else
        printf("%s does not occur at the end of %s\n", b, a);

char c[10] = "Happybday\0"; 
char d[5] = "five\0";

if (strend(c,d) == 1)
        printf("%s does occur at the end of %s\n", d, c);
else
        printf("%s does not occur at the end of %s\n", d, c);

}

int strend(char s[MAXSIZE], char t[MAXSIZE]){
	char *p;
       	char *q;
	p = &s[strlen(s)];
	q = &t[strlen(t)];
	
	for (int i = strlen(t); i > 0; i--){
		if (*p == *q){
		p--;
		q--;
		}
		else{
		//printf("string t does not occur at the end of string s");
		return 0;
		}
	}
		//printf("string t does occur at the end of string s");
		return 1;
	

}
