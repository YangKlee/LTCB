#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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

void sinh_ngau_nhien(int a[], int n)
{
	srand((int)time(0));
	for(int i = 0; i < n; i++)
	{
		while(1)
		{
			int temp = rand() % (5000 - 1 + 1) + 1;
			if(temp %5 == 0)
			{
				a[i] = temp;
				break;
			}
		}
	}
	
}
int dem_le_3_so(int a[], int n)
{
	int cout = 0;
	for(int i = 0; i < n; i++)
	{
		if(dem_chu_so(a[i]) == 3 && a[i]%2 != 0)
		{
			cout++;
		}
	}
	return cout;
	
}
int tong_chan(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
		{
			sum += a[i];
		}
	}
	return sum;	
}
void ghi_boi_15(int a[], int n)
{
	int cout = 0;
	FILE *output_file;
	output_file = fopen("output.txt", "w");
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 15 == 0)
		{
			fprintf(output_file, "%d ", a[i]);
			cout++;
			if(cout == 15)
			{
				fprintf(output_file, "\n");
				cout = 0;
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
		printf("Nhap n (50<n<300): ");
		scanf("%d", &n);
	}
	while(n<= 50 || n>=300);
	int a[n];
	sinh_ngau_nhien(a,n);
	printf("\nSo phan tu co ba chu so va la so le la: %d", dem_le_3_so(a,n));
	printf("\nTong cac so chan trong day la: %d", tong_chan(a,n));
	ghi_boi_15(a,n);
}