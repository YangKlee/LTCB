#include<stdio.h>
void nhap_mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void replace_x_k(int a[], int n, int x)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			dem++;
			a[i] = int('K');
		}
	}
	printf("\nX xuat hien %d lan", dem);
}
main()
{
	int n,x;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	nhap_mang(a,n);
	printf("\nDay vua nhap la: ");
	xuat_mang(a,n);
	printf("\nNhap x: ");
	scanf("%d", &x);
	replace_x_k(a,n,x);
	printf("\nDay da thay the la: ");
	xuat_mang(a,n);
	
}