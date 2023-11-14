#include<stdio.h>
void input_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void export_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int find_max(int a[], int n)
{
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int find_min(int a[], int n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
int sum_duong(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
int nhieu_nhat(int a[], int n)
{
	int num= 0, cout = 0;
	for(int i = 0; i < n; i++ )
	{
		int temp = 0;
		for(int j = i+1 ; j < n; j++ )
		{
			if(a[i] == a[j])
			{
				temp++;
			}
			
		}
		if(temp > cout)
		{
			cout = temp;
			num = a[i];
		}
	}
	return num;
}
int sum_am(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
	input_array(a,n);
	printf("Mang vua nhap la: \n");
	export_array(a,n);
	printf("\nSo lon nhat trong mang la: %d", find_max(a,n));
	printf("\nSo nho nhat trong mang la: %d", find_min(a,n));
	printf("\nTong so am: %d", sum_am(a,n));
	printf("\nTong so duong: %d", sum_duong(a,n));
	printf("\nPhan tu xuat hien nhieu nhat trong mang la: %d", nhieu_nhat(a,n) );
	
	
	
}