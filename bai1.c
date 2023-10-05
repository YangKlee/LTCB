#include<stdio.h>
int main()
{
	int a,b, sum = 0;
	printf("Nhap hai so a va b: ");scanf("%d%d", &a, &b);
	if(b>a)
	{
		for(int i = a; i <= b; i++)
		{
			sum += i;
		}
		printf("Tong tu %d den %d la: %d",a,b,sum);
	}
	else
	{
		printf("b phai lon hon a");
	}

	
}