#include<stdio.h>
void nhap_mang(int a[], int n)
{
	for(int i = 0; i <n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void tim_x(int a[], int n, int x)
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
	printf("Vi tri va gia tri cua phan tu lon nhat va nho hon x tuong ung la:  %d va %d", vitri+1 , max);
}
main()
{
	int n, x, vitrimax;
	printf("Nhap n =  ");
	scanf("%d", &n);
	int a[n];
	nhap_mang(a,n);
	printf("Nhap x = ");
	scanf("%d", &x);
	tim_x(a,n,x);
	

	
}