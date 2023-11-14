#include<stdio.h>
void dao_so(int a[], int n)
{
	int num, temp = n;
	for(int i = 0; i < dem_chu_so(n); i++)
	{
		
		a[i] = temp %10;
		
		temp = temp/10;
	}
	output_array(a, dem_chu_so(n));
}
void output_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
int dem_chu_so(int n)
{

	if(n == 0)
	{
		return 0;
	}
	else
	{

		return 1 + dem_chu_so(n/10);
	}
}
int main()
{
	int so = 0, a[100];
	printf("Nhap day so bat ky: ");
	scanf("%d", &so);
	printf("So dao nguoc la: ");
	dao_so(a,so);
	//printf("\n%d", dem_chu_so(n));
}