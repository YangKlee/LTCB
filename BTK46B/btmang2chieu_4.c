#include<stdio.h>
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
int check_doixung(int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] != a[j][i])
			{
				return 0;
			}
		}

	}
	return 1;
}
int check_dv(int a[][100], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j)
			{
				if(a[i][j] != 1)
				{
					return 0;
				}
			}
			else
			{
				if(a[i][j] != 0)
				{
					return 0;
				}
			}
		}

	}
	return 1;
}
main()
{
	int n, a[100][100];
	printf("Nhap so dong va cot ma tran vuong cap nxn: ");
	scanf("%d", &n);
	input_array(a,n);
	export_array(a,n);
	if(check_doixung(a,n))
	{
		printf("\nMa tran tren la ma tran doi xung");
	}
	else
	{
		printf("\nMa tran tren khong phai la ma tran doi xung");
	}
	if(check_dv(a,n))
	{
		printf("\nMa tran tren la ma tran don vi");
	}
	else
	{
		printf("\nMa tran tren khong phai la ma tran don vi");
	}
}