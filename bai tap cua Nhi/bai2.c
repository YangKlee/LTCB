#include<stdio.h>
int main()
{
	int a,b, sum = 0;
	printf("Nhap hai so a va b: ");scanf("%d%d", &a, &b);
	if(b>a)
	{
		printf("Cac so chia het cho 3 tu %d den %d la: ", a,b);
		for(int i = a; i <= b; i++)
		{
			if(i%3 ==0)
			{
				printf("%d ", i);
			}
		}
		
	}
	else
	{
		printf("b phai lon hon a");
	}
}
	