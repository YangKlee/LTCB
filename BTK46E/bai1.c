#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random_number(int a[], int n)
{
	srand((int)time(0));
	for(int i = 0; i < n; i++)
	{
		a[i] = rand() % (999 - 11 + 1) + 11;
	}
}

int dem_uoc_chan(int a[], int n)
{
	int cout = 0;
	for(int i = 0; i < n; i++)
	{
		if(2070 % a[i] == 0 && a[i] %2 == 0)
		{
			cout++;
		}
	}
	return cout;
}
int sum_vitrichan(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if((i+1) %2 == 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
void chia_het_10(int a[], int n)
{
	int dem = 0;
	FILE *output_file;
	output_file = fopen("output.txt", "w");
	for(int i =0; i < n; i++)
	{
		if(a[i] % 10 == 0)
		{
			fprintf(output_file, "%d ", a[i]);
			dem++;
			if(dem == 10)
			{
				fprintf(output_file, "\n");
				dem = 0;
			}
		}
	}
	fclose(output_file);
}
main()
{
	int n;
	do
	{
		printf("Nhap n (20<n<100): ");
		scanf("%d", &n);
	}
	while(n <= 20 || n>=100 );
	int a[n];
	random_number(a,n);
	printf("\nSo phan tu chia het cho 2070 ma la so chan la: %d", dem_uoc_chan(a,n));
	printf("\nTong cac phan tu o vi tri chan la: %d", sum_vitrichan(a,n));
	chia_het_10(a,n);
	
}