#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gacha(int a[], int n)
{
	srand((int)time(0));
	for(int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % (100);
	}
}
void export_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
main()
{

	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
	gacha(a,n);
	export_array(a,n);
}
