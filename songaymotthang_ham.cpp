#include<stdio.h>
int dayofmonth(int month, int year)
{
	if(month == 4 ||month == 6||month == 9|month == 11) // thang co 30 ngay
	{
		return 30;
	}
	else if(month == 2)
	{
			if(year%4 == 0 &&year%100!=0) // nam nhuan chia het cho 4 va k chia het cho 100
			{
				return 29;
			}
			else
			{
				return 28;
			}
	}
	else
	{
		return 31;
	}
}
int main()
{
	int month, year;
	printf("Nhap thang, nam: ");scanf("%d%d", &month, &year);
	printf("So ngay cua thang la: %d", dayofmonth(month, year));
}