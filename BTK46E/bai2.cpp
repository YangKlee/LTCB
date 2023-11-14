#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random_number(int a[], int n)
{
	int dem = 0;
	srand((int)time(0));
	for(int i = 0; i < n; i++)
	{
		while(1)
		{
			int temp = rand() % (1999 - 2 + 1) + 2;
			if(temp %2 == 0)
			{
				a[i] = temp;
				break;
			}
		}
	}
}

int dem_chu_so(int n)
{
	if(n < 10)
	{
		return 1;
	}
	else
	{
		return 1+dem_chu_so(n/10);
	}
}
int dem_boi(int a[], int n)
{

	int cout = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] %5 == 0 && a[i] %3 == 0)
		{
			cout++;
		}
	}
	return cout;
}
unsigned long long int tich_le(int a[], int n)
{
	unsigned long long int tich = 1;
	for(int i = 0; i < n; i++)
	{
		if((i+1) %2 != 0)
		{
			tich *= (unsigned long long int)a[i];
		}
	}
	return tich;
}
void in_file(int a[], int n)
{
	FILE *output_file;
	output_file = fopen("output.txt", "w");
	for(int i = 0; i < n; i++)
	{
		if(dem_chu_so(a[i]) == 2 || dem_chu_so(a[i]) == 3 )
		{
			fprintf(output_file, "%d ", a[i]);
		}
	}
	fclose(output_file);
}
main()
{
	int n;
	do
	{
		printf("Nhap n (25<n<250): ");
		scanf("%d", &n);
	}
	while(n <= 25 || n>=250 );
	int a[n];
	random_number(a,n);
	printf("\nSo phan tu boi cua 3 va 5 la: %d", dem_boi(a,n));
	printf("\nTich cac phan tu o vi tri le la: %llu", tich_le(a,n));
	in_file(a,n);
	
}
