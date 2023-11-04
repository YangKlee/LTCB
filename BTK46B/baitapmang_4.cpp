#include<stdio.h>
void input_point(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Nhap diem mon hoc thu %d: ", i+1);
		scanf("%f", &a[i]);
	}
}
void export_point(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%.1f\n", a[i]);
	}
}
float tbc_point(float a[], int n)
{
	float sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum/n;
}
void covernt_4(float a[], int n)
{
	float point_4[n];
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= 0 && a[i] <4)
		{
			point_4[i] = 0;
		}
		else if(a[i] >= 4 && a[i] <5)
		{
			point_4[i] = 1.5;	
		}
		else if(a[i] >= 5 && a[i] <6)
		{
			point_4[i] = 2;	
		}
		else if(a[i] >= 6 && a[i] <7)
		{
			point_4[i] = 2.5;	
		}
		else if(a[i] >= 7 && a[i] <8)
		{
			point_4[i] = 3;	
		}
		else if(a[i] >= 8 && a[i] <9)
		{
			point_4[i] = 3.5;	
		}
		else if(a[i] >= 9 && a[i] <=10)
		{
			point_4[i] = 4;	
		}
	}
	export_point(point_4, n);
}
int main()
{
	int n;
	printf("Nhap so mon hoc: ");scanf("%d", &n);
	float point[n];
	input_point(point,n);
	printf("Trung binh cong diem la: %.3f\n", tbc_point(point, n));
	printf("Bang diem theo thang diem 4 cua sinh vien: \n");
	covernt_4(point, n);
}