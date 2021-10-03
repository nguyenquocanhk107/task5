#include<stdio.h>
int main()
{
int x,y;
printf("nhap so x : ");
scanf("%d",&x);
printf("nhap so y : ");
scanf("%d",&y);
if(x>3000&&(y<500&&y>100))
printf("x=%d\ny=%d",x,y);
if(x<2000&&(y<500&&y>100))
printf("x=%d\ny=%d",x,y);
if(x>2000&&x<3000&&(y<500&&y>100))
printf("y=%d",y);
if(y>500&&x>3000)
printf("x=%d",x);
if(y>500&&x<2000)
printf("x=%d",x);
if(y<100&&x>3000)
printf("x=%d",x);
if(y<100&&x<2000)
printf("x=%d",x);
return 0;






}

