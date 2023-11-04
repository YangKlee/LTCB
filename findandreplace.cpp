#include<stdio.h>
void input_array(int a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void export_array(int a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("%d ", a[i]);
	}
}
void xen(int a[], int n, int k, int so)
{
	for(int i = n; i > k-2; i--)
	{
		a[i+1] = a[i];
	}
	a[k-1] = so;
	export_array(a,n+1);
}
int main()
{
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	input_array(a,n);
	printf("Mang vua nhap la: \n");
	export_array(a,n);
	int k,num;
	printf("\nNhap vi tri phan tu can chen vao: ");
	scanf("%d", &k);
	printf("\nNhap gia tri phan tu can chen vao: ");
	scanf("%d", &num);
	xen(a,n,k,num);
}