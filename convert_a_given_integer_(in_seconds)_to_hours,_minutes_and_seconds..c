#include<stdio.h>
int main()
{
    int n,H,M,S;
    scanf("%d",&n);
    H=n/3600;
    M=(n-(H*3600))/60;
    S=(n-(H*3600))-(M*60);
    printf("H:M:S-%d:%d:%d",H,M,S);
}