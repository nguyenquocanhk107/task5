#include<stdio.h>
int main()
{
 int diem ;
 printf("nhap so diem cua hoc sinh : ");
 scanf("%d",&diem);
 if(diem>=75)

  printf("diem A");
   else if((diem<75&&diem>60)||diem==60)
 printf("diem B ");
 else if((diem<60&&diem>45)||diem==45)
 printf("diem C");
 else if((diem<45&&diem>35)||diem==35)
 printf("diem D");
 else
 printf("diem F");
 

    
	
	return 0;
}

