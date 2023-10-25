
#include<stdio.h>
#include <math.h>
int vct_type;
int vct_temp[100];
void input_vct(int a[]);
double dodai_vct(int a[]);
int tich_vo_huong(int a[], int b[]);
double goc_vct(int a[], int b[]);
void export_vct(int a[]);
int check_cungphuong(int a[], int b[] );
int main()
{
	int vct_a[100];
	int vct_b[100];
	printf("Nhap chieu cua vector(chieu >= 2): ");
	scanf("%d", &vct_type);
	printf("Nhap vector A: \n");
	input_vct(vct_a);
	//export_vct(vct_a);
	printf("Nhap vector B: \n");
	input_vct(vct_b);
	printf("\nDo dai vector A la: %lf ", dodai_vct(vct_a)) ;
	printf("\nDo dai vector B la: %lf ", dodai_vct(vct_b));
	printf("\nGoc giua hai vector la: %lf do ", goc_vct(vct_a,vct_b));
	if (check_cungphuong(vct_a, vct_b))
	{
		printf("\nHai vecto la hai vecto cung phuong");
	}
	else
	{
		printf("\nHai vector khong cung phuong");
	}

}
void input_vct(int a[])
{
	for (int i = 0; i < vct_type; i++)
	{
		printf("Nhap gia tri thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
}
double dodai_vct(int a[])
{
	double sum = 0;
	for (int i = 0; i < vct_type;  i++)
	{
		sum += pow(a[i], 2);

	}
	return sqrt(sum);
}
int tich_vo_huong(int a[], int b[])
{
	int sum = 0;
	for (int i = 0; i < vct_type; i++)
	{
		sum += a[i] * b[i];
	}
	return sum;
}
double goc_vct(int a[], int b[])
{
	double goc;
	goc = (double)tich_vo_huong(a, b) / (dodai_vct(a) * dodai_vct(b));
	return acos(goc);
}
int check_cungphuong(int a[], int b[])
{
	float vct_check[100];
	for (int i = 0; i < vct_type; i++)
	{
		vct_check[i] = (float)a[i] / (float)b[i]; 
	}
	float pivot = vct_check[0]; 
	for (int i = 1; i < vct_type; i++)
	{
		if (vct_check[i] != pivot)  
		{
			return 0;
			break;
		}
	}
	return 1;


}
void export_vct(int a[])
{
	for (int i = 0; i < vct_type; i++)
	{

		printf("%d ", a[i]);
	}
}
