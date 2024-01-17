#include<stdio.h>
#include<stdlib.h>
void input_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
int dem_boi_3(int a[], int n)
{
	int cout = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%3 == 0 )
		{
			cout++;
		}
	}
	return cout;
}
int max_end(int a[], int n)
{
	int max = 0, pivot;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= max)
		{
			max = a[i];
			pivot = i;
		}
	}
	return pivot+1;
}
void write_file(int a[], int n)
{
	FILE *f;
	f= fopen("soNguyen.txt", "w");
	if(f == NULL)
	{
		printf("File Error!");
		exit(0);
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 != 0)
		{
			fprintf(f, "%d     ", a[i]);
		}
		
	}
	fclose(f);
}
float read_and_avg(int a[], int n)
{
	FILE *f;
	f= fopen("soNguyen.txt", "r");
	if(f == NULL)
	{
		printf("File Error!");
		exit(0);
	}
	int tg = 0, sum = 0, cout = 0,temp;
	do
	{
		tg = fscanf(f,"%d", &temp);
		if(tg!= EOF)
		{
			sum+=temp;
			cout++;
		}
	}
	while(tg != EOF);
	fclose(f);
	return (float)sum/(float)cout;
	
}
int main()
{
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	input_array(a,n);
	printf("\nCo %d phan tu la boi cua 3 trong mang!", dem_boi_3(a,n));
	printf("\nVi tri so lon nhat cuoi cung la: %d", max_end(a,n));
	write_file(a,n);
	printf("\nTrung binh cong cua cac so le la: %.2f", read_and_avg(a,n));
}

