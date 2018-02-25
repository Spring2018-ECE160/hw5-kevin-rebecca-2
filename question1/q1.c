#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 1000

int getch();
void ungetch(int i);
float getfloat(float *pn);

char buf[MAXSIZE];
int bufp = 0;

int main(){

        int n;
        float array[MAXSIZE];
        for (int i = 0; i < 3; i++){
                printf("Insert your number: ");
                getfloat(&array[n]);
                printf("%f\n", array[n]);
                n++;
        }
        return 0;

}
float getfloat(float *pn){

        int c,sign;
        float power;

        while(isspace(c=getch()));

        if( !isdigit(c) && c!=EOF && c!= '+' && c != '-' && c != '.'){
                ungetch(c);
                return 0;
        }

        sign = ( c == '-') ? -1: 1;

        if( c == '+' || c == '-')
                c = getch();

        for(*pn = 0.0 ; isdigit(c);c=getch())
                *pn = 10.0 * *pn + (c - '0');
        if( c == '.')
                c = getch();

        for(power=1.0;isdigit(c);c=getch()){

                *pn = 10.0 * *pn + (c - '0');
                power *= 10.0;
        }

        *pn  *= sign / power;

        if( c != EOF)
                ungetch(c);

        return c;

}
int getch(void)
{
        return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
        if(bufp >= MAXSIZE)
                printf("Ungetch: Too many characters\n");
        else
                buf[bufp++]=c;
}

