#include<stdio.h>
int main()
{
	int luong ;
	char phucap;
	printf("cap bac phu cap");
	scanf("%c",&phucap);
	printf("nhap so luong : ");
	scanf("%d",luong);

	switch(phucap)
	{
	
	
	case 'a':
	printf("luong cuoi thang la :%d",luong+300);
	break;
	case'b':
	printf("luong cuoi thang la:%d",luong+250);
	break;
	case'o':
	printf("luong cuoi thang la :%d",luong+100);
	break;
    }
    
	
	return 0;
}

