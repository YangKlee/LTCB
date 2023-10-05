
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,type_char,ascii_code;
	unsigned char c;
	//truyen vao gia tri dong thoi gian thuc de tao ra so ngau nhien sau moi lan chay
	srand((int)time(0)); 
	printf("Nhap do dai mat khau can tao: ");scanf("%d", &n);
	for(int i = 1; i <= n ; i++)
	{
		// random tao kieu so, kieu chu thuong, chu hoa ngau nhien
		type_char = 1 + rand() % (3+1-1); 
		if(type_char == 1)
		{
			ascii_code = 48 + rand() % (57+1-48); // so
		}
		else if(type_char == 2)
		{
			ascii_code = 64 + rand() % (90+1-64); // chu cai thuong
		}
		else if(type_char == 3)
		{
			ascii_code = 97 + rand() % (122+1-97); // chu cai hoa
		}

		c = ascii_code;
		printf("%c",c);
	}
	printf("\nMat khau duoc tao la ngau nhien!");

	
	
	
	
}