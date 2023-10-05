#include<stdio.h>
int main()
{
	int n, s = 0;
	printf("Nhap n: ");scanf("%d", &n);
	for(int i=n ; i>=1 ; i-- )
	{
		if(i%2 ==0)
		{
			s += i*i;
		}
	}
	printf("Tong binh phuong so chan trong day tu 1-%d la: %d", n, s);
}
/* Ket luan:
Chuc nang cua chuong trinh la:
tinh tong binh phuong cua cac so chan trong day 1 - n
*/
