#include<stdio.h>
int giai_thua(int n)
{
	int gt = 1;
	for (int i = 1; i <= n; i++)
	{
		gt *= i;
	}
	return gt;
}
int main()
{
	int n,k;
	int tohop;
	printf("Nhap to hop n chap k: "); scanf("%d%d", &n, &k);
	tohop = giai_thua(n) / (giai_thua(k) * giai_thua(n - k));
	printf("Ket qua la: %d", tohop);
}