#include<stdio.h>
int main()
{
	int a,b,tich;
	printf("nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	tich=a*b;
	if(tich<1000)
	 printf("tich hai so be hon 1000");
	else if(tich==1000)
	  printf("tich hai so bang 1000");
	else
	 printf("tich hai so lon hon 1000");

	return 0;
	
}

