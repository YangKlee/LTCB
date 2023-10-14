#include<stdio.h>
int main()
{
	int n, d = 0,sum =0, dem_so = 0, max = 0, so;
	printf("Nhap day so n: "); scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		// dem so tu 1 den n co bao nhieu so chia het cho 3
		if (i % 3 == 0)
		{
			d++;
		}
		// Tong tu 1 den n
		sum += i;
	}
	do
	{
		so = n % 10;
		n = n / 10;
		dem_so ++;
		if (so > max)
		{
			max = so;
		}
	} while (n != 0);
	printf("Tu 1 den n co %d so chia het cho 3\n", d);
	printf("Tong tu 1 den n la: %d\n", sum);
	printf("n co %d chu so\n", dem_so);
	printf("So lon nhat trong n la: %d", max);

}