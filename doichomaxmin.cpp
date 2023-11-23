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
void doi_cho(int a[], int n)
{
	int max = 0; 
	int vt_min, vt_max;
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		
		if(a[i] <= min)
		{
			min = a[i];
			vt_min = i;
		}
		if(a[i] > max)
		{
			max = a[i];
			vt_max = i;	
		}
	}
	int tg = a[vt_min];
	a[vt_min] = a[vt_max];
	a[vt_max] = tg;

}
main()
{
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	nhap_mang(a,n);
	printf("\nMang vua nhap la: ");
	xuat_mang(a,n);
	doi_cho(a,n);
	printf("\nMang sau khi doi cho la: ");
	xuat_mang(a,n);
}
