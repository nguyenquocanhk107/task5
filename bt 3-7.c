#include<stdio.h>
int main()
{
	int a,b,hieu;
	printf("nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	hieu=a-b;
	if(hieu==a||hieu==b)
	 printf("Chenh lech bang gia tri <so gia tri duoc nhap>");
	else
	 printf("su chenh lech khong  bang gia tri nao da nhap ");

	return 0;
	
}

