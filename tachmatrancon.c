#include<stdio.h>
void input_matrix(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("a[%d,%d]= ", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
}
void output_matrix(int a[][100], int m, int n)
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
void output_matrix2(int a[][100], int m, int n, int mc, int nc)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != mc-1 && j != nc-1)
			{	
				printf("%d ", a[i][j]);
			}
		}
		if(i != mc-1)
		{
			printf("\n");
		}

	}
}
main()
{
	int m,n, mc, nc;
	printf("Nhap so dong va cot cua ma tran: ");
	scanf("%d%d", &m, &n);
	int a[100][100];
	input_matrix(a,m,n);
	output_matrix(a,m,n);
	do
	{
		printf("Nhap dong va cot can loai bo: ");
		scanf("%d%d", &mc, &nc);
		output_matrix2(a,m,n,mc, nc);
	}
	while(mc != 0 && nc != 0);

	//tach_matrix(a,m,n,mc,nc);
	
}