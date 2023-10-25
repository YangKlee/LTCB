#include<stdio.h>

void xuatmang(int a[], int n);
void xuli(int a[], int n);
void xulileft(int a[], int n);
//void xuliright(int a[], n);

main()
{
	int a[] = {56,34,72,3,20,31,47,10, 79, 15, 83, 40};
	int n = 11;
	xuli(a,n);
}

void xuatmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void xuli(int a[], int n)
{
	int pivot = a[n-1];
	int l= -1;
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= pivot)
		{
			int tg;
			l++;
			tg = a[i];
			a[i] = a[l];
			a[l] = tg;
			
		}
	}
	//a[n-1] = a[l+1];
	//a[l+1] = pivot;
	//printf("vi tri l: %d \n", l);
	xuatmang(a, n);
	
}
void xulileft(int a[], int n)
{
	int pivot = a[n-1];
	int l= -1;
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= pivot)
		{
			int tg;
			l++;
			tg = a[i];
			a[i] = a[l];
			a[l] = tg;
			
		}
	}
	
}