#include<stdio.h>
void input_array(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Nhap phan tu dong %d cot %d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
}
void export_array(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void tbc_line(int a[][100], int m, int n)
{
	int sum = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			sum+= a[i][j];
		}
		printf("\nTBC dong %d la %.2f", i+1, (float)sum/(float)n);
		sum= 0;
	}
}
int sum_cheo_chinh(int a[][100], int m, int n)
{
	if(m == n)
	{
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum += a[i][i];
		}
		return sum;
	}
	else
	{
		return 0;		
	}
}
int cout_x(int a[][100], int m, int n, int x)
{
	int cout = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				cout++;
			}
		}

	}
	return cout;
}
int main()
{
	int m, n;
	printf("Nhap lan luot so dong va cot cua ma tran: ");
	scanf("%d%d", &m, &n);
	int a[100][100];
	input_array(a,m,n);
	export_array(a,m,n);
	tbc_line(a,m,n);
	if(sum_cheo_chinh(a,m,n)!= 0)
	{
		printf("\nTong cac phan tu nam trong duong cheo chinh la: %d", sum_cheo_chinh(a,m,n));
	}
	else
	{
		printf("\nDuong cheo chinh chi ton tai tren ma tran vuong nxn");
	}
	printf("\nNhap phan tu x can tim: ");
	int x;
	scanf("%d", &x);
	printf("\nPhan tu %d xuat hien %d lan trong mang!", x,cout_x(a,m,n,x));
	
}