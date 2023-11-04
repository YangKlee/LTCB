#include<stdio.h>
void input_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void output_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int xacdinh_csc(int a[], int n)
{
	int last = a[0] - a[1];
	for(int i = 1; i < n; i++)
	{
		if(a[i-1] - a[i] != last)
		{
			return 0;
		}
	}
	return 1;
}
int xacdinh_csn(int a[], int n)
{
	float last = (float)a[0] / (float)a[1];
	for(int i = 1; i < n; i++)
	{
		if((float)a[i-1] / (float)a[i] != last)
		{
			return 0;
		}
	}
	return 1;
}
main()
{
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	input_array(a,n);
	if(xacdinh_csc(a,n))
	{
		printf("Day tren la mot cap so cong");
	}
	else
	{
		printf("Day tren khong phai la cap so cong");
	}
	if(xacdinh_csn(a,n))
	{
		printf("\nDay tren la mot cap so nhan");
	}
	else
	{
		printf("\nDay tren khong phai la cap so nhan");
	}
	
	
}