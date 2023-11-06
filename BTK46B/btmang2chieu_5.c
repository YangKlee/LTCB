#include<stdio.h>
#include<math.h>
void input_array(int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Nhap phan tu dong %d cot %d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
			
		}
	}
}

void export_array(int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[][100], int b[][100], int c[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nA+B = \n");
	export_array(c,n);
}
void nhan(int a[][100], int b[][100], int c[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int temp = 0;
			for(int k = 0; k < n; k++)
			{
				temp+= a[i][k]*b[k][j];
			}
			c[i][j] = temp;
		}
	}
	printf("\nA*B = \n");
	export_array(c,n);
}
int max_sum_line(int a[][100], int n)
{
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		int temp = 0;
		for(int j = 0; j < n; j++)
		{
			temp += a[i][j];
		}
		if(temp > max)
		{
			max = temp;
		}
	}
	return max;
}
int check_tang_dan(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(a[i-1]>=a[i])
		{
			return 0;
		}
	}
	return 1;
}
int check_ngto(int n)
{
	int temp = 0;
	for(int i = 2; i < sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	if(n >= 2)
	{
		return 1;
	}
}
int dem_ngto(int a[][100], int n)
{
	int cout = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(check_ngto(a[i][j]))
			{
				cout++;
			}
		}
	}
	return cout;
}
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[100][100], b[100][100],c[100][100];
	printf("Nhap ma tran a: \n");
	input_array(a,n);
	printf("\nNhap ma tran b: \n");
	input_array(b,n);
	printf("\nMatrix A = \n");	
	export_array(a,n);
	printf("\nMatrix B = \n");
	export_array(b,n);
	sum(a,b,c,n);
	nhan(a,b,c,n);
	printf("\nTong lon nhat trong cac dong cua ma tran A la: %d", max_sum_line(a,n));
	printf("\nTong lon nhat trong cac dong cua ma tran B la: %d", max_sum_line(b,n));
	printf("\nKiem tra tang dan: ");
	printf("\n Ma tran A: \n");
	for(int i = 0; i < n; i++)
	{
		printf("Dong %d: " , i+1);
		if(check_tang_dan(a[i], n))
		{
			printf("Tang dan\n");
		}
		else
		{
			printf("Khong tang dan\n");
		}
	}
	printf("\n Ma tran B: \n");
	for(int i = 0; i < n; i++)
	{
		printf("Dong %d: " , i+1);
		if(check_tang_dan(b[i], n))
		{
			printf("Tang dan\n");
		}
		else
		{
			printf("Khong tang dan\n");
		}
	}
	printf("\n Ma tran A co %d so nguyen to\nMa tran B co %d so nguyen to", dem_ngto(a,n), dem_ngto(b,n));
	//Source by: Yang - 4651050044
}