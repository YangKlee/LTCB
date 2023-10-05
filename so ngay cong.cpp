#include<stdio.h>
int main()
{
	int sn, tc, luong;
	printf("Nhap so ngay cong: ");scanf("%d",&sn);
	printf("Nhap so tien cong 1 ngay: ");scanf("%d",&tc);
	if (sn <= 25)
	{
		luong = sn*tc;
	}
	else
	{
		luong = 25*tc+(sn-25)*2*tc;
	}
	printf("So luong la: %d", luong);
}
