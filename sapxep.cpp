#include<stdio.h>
int n = 0;
void nhapmang(int a[])
{
	int i = 0;
	while(1)
	{
		printf("Nhap phan tu thu %d. Nhap 0 de thoat nhap: ",i+1);
		scanf("%d", &a[i]);
		if(a[i]!= 0)
		{
			i++;
			n++;
		}
		else
		{
			break;
		}

		
	}
}
void xuatmang(int a[])
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void softminmax(int a[])
{
	int min;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				min = a[i];
				a[i] = a[j];
				a[j] = min;

			}
		}		
	}
	xuatmang(a);
}
void softmaxmin(int a[])
{
	int min;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				min = a[j];
				a[j] = a[i];
				a[i] = min;

			}
		}		
	}
	xuatmang(a);
}
int main()
{
	int a[100];
	nhapmang(a);
	softminmax(a);
	printf("\n");
	softmaxmin(a);

}