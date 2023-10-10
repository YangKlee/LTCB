#include<stdio.h>
int main()
{

	int s=0,d=0, n = 0;
	do
	{
		
		printf("Nhap n: ");scanf("%d", &n);

		if(n%2 ==0 && n!= 0) // n!= 0 vi 0 cung chia het cho 2 nen cung duoc coi la so chan
		{
			s +=n;
			d++;
		}

	}
	while(n!= 0);	
	printf("Trung binh cong cac so chan la %d", s/d);
}
/* Ket luan:
Chuc nang cua chuong trinh la:
Nhap lan luot cac so n, neu nhap n = 0 thi dung va tinh trung binh cong so chan trong cac so da nhap
*/
