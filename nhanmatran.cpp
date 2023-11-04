#include<stdio.h>
#include<math.h>
int matrix_kq[100][100];
int det = 0;
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
void nhan_matrix(int a[][100], int b[][100], int m, int n, int ts)
{
	int temp = 0;
	for(int i = 0; i < m; i++) // dong
	{
		for(int j = 0; j < n; j++) // cot
		{
			int temp = 0;
			for(int k = 0; k < ts; k++)
			{
				temp+= a[i][k]*b[k][j];
			}
			matrix_kq[i][j] = temp;
			
		}
	}
	export_matrix(matrix_kq, m , n);
}
void det_matrix(int a[][100], int m, int n) // tinh dinh thuc
{
	if(m == n )
	{
		if(m == 2)
		{
			///det 
		}
		//for(int i == 0 ; i < m; i++)
		{
			//det += pow(1,1+i+1)*a[0][i]*det_matrix(a[i+1][i+1])
		}
	}
	else
	{
		printf("Dinh thuc chi ton tai tren ma tran vuong nxn");
	}
}
int main()
{
	int m, n;
	int m_kq, n_kq;
	printf("Nhap lan luot so dong va cot ma tran A: ");
	scanf("%d%d", &m, &n);
	int matrix_a[100][100];
	input_matrix(matrix_a,m,n);
	m_kq = m;
	export_matrix(matrix_a, m , n);
	printf("Nhap lan luot so dong va cot ma tran B: ");
	scanf("%d%d", &m, &n);
	n_kq = n;
	int matrix_b[100][100];
	input_matrix(matrix_b,m,n);

	export_matrix(matrix_b, m , n);
	printf("Ket qua A x B la: :\n");
	nhan_matrix(matrix_a, matrix_b, m_kq, n_kq, m);


}