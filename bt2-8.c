#include<stdio.h>
int main()
{
char ngonngu ;
printf("nhap ngon ngu:");
scanf("%c",&ngonngu);
switch(ngonngu)
{
	case'A':
	case'a':
	printf("ngon ngu: ada ");
	break;
	case'B':
	case'b':
	printf("ngon ngu : Basic");
	break;
	case'C':
	case'c':
	printf("ngon ngu :COBOL");
	break;
	case 'D':
	case'd':
	printf("ngon ngu :dBASE III ");
	break;
	case'f':
	case'F':
	printf("ngon ngu :Fortran ");
	break;
	case'p':
	case'P':
	printf("ngon ngu : Pascal"); 
	break;
	case'V':
	case'v':
	printf("ngon ngu: Visual C++");
	break;
	default:
		printf("khong hien thi ");
		break;
	
	
}


return 0;






}

