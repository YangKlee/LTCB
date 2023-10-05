#include<stdio.h>
int main()
{
	int ascii_code;
	unsigned char c;
	printf("Nhap ky tu: ");scanf("%c", &c);
	ascii_code = int(c);
	if(ascii_code >=48 && ascii_code <=57)
	{
		printf("%c la so", c);
	}
	else if(ascii_code >=65 && ascii_code <=90)
	{
		printf("%c la chu cai in hoa", c);
	}
	else if(ascii_code >=97 && ascii_code <=122)
	{
		printf("%c la chu cai in thuong", c);
	}
	else
	{
		printf("%c la ky tu khac", c);
	}
}
