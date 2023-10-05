#include<stdio.h>
int main()
{
	int year;
	printf("Nhap nam: ");scanf("%d", &year);
	for(int i = 1;i<= 12; i++)
	{
		if(i == 4 ||i==6||i==9|i==11) // thang 30 ngay la 4,6,9,11
		{
			printf("Thang %d co 30 ngay\n", i);
		}
		else if(i!=2)
		{
			printf("Thang %d co 31 ngay\n", i);
		}
		else
		{
			if(year%4 == 0 &&year%100!=0) // nam nhuan chia het cho 4 va k chia het cho 100
			{
				printf("Thang %d co 29 ngay\n", i);
			}
			else
			{
				printf("Thang %d co 28 ngay\n", i);
			}
		}
	}
}
