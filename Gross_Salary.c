#include<stdio.h>
int main()
{
     int bs;
     float da,hra,gs;
     scanf("%d",&bs);
     if(bs<=10000)
     {
         da=bs*0.80;
         hra=bs*0.20;
         gs=bs+hra+da;
     }
     else if (bs<=20000)
     {
         da=bs*0.90;
         hra=bs*0.25;
         gs=bs+hra+da;
     }
     else
     {
         da=bs*0.95;
         hra=bs*0.30;
         gs=bs+hra+da;
     }
     printf("%.2f",gs);
}