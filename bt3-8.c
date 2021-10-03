#include<stdio.h>
int main()
{
int x,y,z;
printf("nhap x :");
scanf("%d",&x);
printf("nhap y :");
scanf("%d",&y);
printf("nhap z :");
scanf("%d",&z);
if(z>x&&z>y)
printf("z=%d",z);
if(x>z&&x>y)
printf("x=%d",x);
if(y>z&&y>x)
printf("y=%d",y);
if(z==y&&z>x)
printf ("z=y=%d",z);
if(y==x&&x>z)
printf("y=x=%d",y);
if(x==z&&y<z)
printf("x=z=%d",x);

return 0;
}
