//Viet code tinh trung binh cong so chan trong day
#include<stdio.h>
int main()
{
	int n,so,sum = 0,d = 0;
	printf("Nhap day so: ");scanf("%d", &n);
	do
	{
		so = n%10;
		n /= 10;
		if(so %2 == 0 && so != 0) // Loai so 0 vi so 0 cung chia het cho 2
		{
			sum += so;
			d++;
		}
	}
	while(n!= 0);
	printf("Trung binh cong so chan trong day la: %d", sum/d);
	
}
