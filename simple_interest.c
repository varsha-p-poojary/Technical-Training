#include<stdio.h>
int main()
{
   int P,T,R;
   float SI;
   printf("P,T,R");
   scanf("%d%d%d",&P,&T,&R);
   SI=(float)P*T*(float)R/100;
   printf("%f",SI);
   return 0;
}
