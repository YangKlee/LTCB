#include<stdio.h>
int luythua(int a, int n)
{
	if(n == 1)
	{
		return a;
	}
	else
	{
		// de quy luy thua la a*a
		return luythua(a, n-1)*a;
	}
}
int main()
{
	int a, n, ketqua;
	printf("Nhap luy thua a mu n: "); scanf("%d%d", &a, &n);
	ketqua = luythua(a,n);
	printf("Ket qua la: %d", ketqua);
	
}