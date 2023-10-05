#include<stdio.h>
#include<math.h>
int main()
{
	int tien_gui,thang, money;
	float lai;
	printf("Nhap tien gui: ");scanf("%d", &tien_gui);
	printf("Nhap so thang: ");scanf("%d", &thang);
	printf("Nhap lai 1 thang (phan tram): ");scanf("%f", &lai);
	/*
	Cong thuc lai suat: T = A(1+r)^n
	Trong do: T: tong so tien bao gom goc lan lai
			  A: So tien nop vao
			  r: lai suat(%)
			  n: so thang
	*/
	if(tien_gui!=0 && thang!=0 && lai!=0 )
	{
		money = tien_gui*pow((1+lai/100), thang);
		printf("Tong so tien nhan duoc la: %d", money);
	}
	else
	{
		printf("Tien gui, thang, lai khong duoc la so 0");
	}

}