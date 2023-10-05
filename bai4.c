#include<stdio.h>
int main()
{

	int s=0,d=0;
	while(1) // cho gia tri = 1 de vong lap luon dung o moi truong hop
	{
		int n;
		printf("Nhap n: ");scanf("%d", &n);

		if(n%2 ==0 )
		{
			s +=n;
			d++;
		}
		if(n==0)
		{
			break; 
		}

	}	
	printf("Trung binh cong cac so chan la %d", s/d);
}
/* Ket luan:
Chuc nang cua chuong trinh la:
tinh trung binh cong cac so chan
*/
