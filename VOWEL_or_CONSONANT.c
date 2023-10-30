#include<stdio.h>
int main()
{
    char x,A,E,I,O,U,a,e,i,o,u;
    scanf("%c",&x);
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("VOWEL");
    }
    else 
    {
        printf("CONSONANT");
    }
}