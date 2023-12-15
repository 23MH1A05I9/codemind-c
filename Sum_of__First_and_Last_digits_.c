#include<stdio.h>
int main()
{
    int n,o,r;
    scanf("%d",&n);
    r=n%10;
    while(n>0)
    {
        o=n;
        n=n/10;
    }
    printf("%d",o+r);
}