#include<stdio.h>
#include<math.h>
int dt = 0;
void input_matrix(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Nhap phan tu hang thu %d cot thu %d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
}
void export_matrix(int a[][100], int m, int n)
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
void det(int a[][100], int m, int n)
{
	
	if(m == n)
	{
		//if(m == 2)
		//{
			// xu li ma tran cap 2
			//det += a[0][0]
		//}
		for(int i = 0; i < n; i++)
		{
			dt += pow(1,1+i)*a[0][i]*matrancon(a, m,n,i);
		}
	}
	else
	{
		printf("Dinh thuc chi ton tai tren ma tran vuong");
	}
}
int matrancon(int a[][100], int m, int n, int c)
{
	int m[100][100] = a;
	for(int i = 1; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(c == j)
			{
				i --;
			}
			else
			{
				if(i > c)
				{
					m[i-1][j-1] = a[i][j];
				}
				else
				{
					m[i-1][j] = a[i][j];
				}
				
			}
		}
		printf("\n");
	}
}
main()
{
	int m, n;
	printf("Nhap lan luot so dong va cot ma tran A: ");
	scanf("%d%d", &m, &n);
	int matrix_a[100][100];
	input_matrix(matrix_a,m,n);
	export_matrix(matrix_a, m , n);
}
