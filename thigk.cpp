#include<stdio.h>
void nhap_mang(int a[], int n)
{
	for(int i = 0; i <n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
int max_x(int a[], int n, int x)
{
	int max = 0, vitri = 0;
	for(int i = 0; i <n; i++)
	{
		if(a[i] > max &&  a[i] < x)
		{
			max = a[i];
			vitri = i;
		}
	}
	return vitri;
}
main()
{
	int n, x, i;
	printf("Nhap n =  ");
	scanf("%d", &n);
	int a[n];
	nhap_mang(a,n);
	printf("Nhap x = ");
	scanf("%d", &x);
	i = max_x(a,n,x);
	if(a[i] < x)
	{
		printf("Vi tri va gia tri cua phan tu lon nhat va nho hon x tuong ung la:  %d va %d", i+1 , a[i]);
	}
	else
	{
		printf("Khong co phan tu lon nhat va nho hon x");
	}
	

	
}