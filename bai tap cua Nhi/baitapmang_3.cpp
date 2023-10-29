#include<stdio.h>
void input_point(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Nhap diem mon hoc thu %d: ", i+1);
		scanf("%f", &a[i]);
	}
}
int cout_b(float a[], int n)
{
	int cout = 0;
	for(int i = 0; i< n; i++)
	{
		if(a[i] >= 6 && a[i] < 7)
		{
			cout++;
		}
	}
	return cout;
}
int check_hb(float a[], int n)
{
	for(int i = 0; i< n; i++)
	{
		if(a[i] < 7)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	printf("Nhap so mon hoc: ");scanf("%d", &n);
	float point[n];
	input_point(point,n);
	printf("So mon hoc dat diem B cua sinh vien: %d\n", cout_b(point, n));
	if(check_hb(point,n))
	{
		printf("Sinh vien du dieu kien dat duoc hoc bong");
	}
	else
	{
		printf("Sinh vien khong du dieu kien dat duoc hoc bong");
	}
	
}