#include<stdio.h>
void input_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void output_array(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void sonhieu(int a[], int n)
{
	int num, cout = 0;
	for(int i = 0; i <n ;i++)
	{
		int temp = 0;
		for(int j =i+1; j< n; j++)
		{
			if(a[i] == a[j])
			{
				temp++;
			}
		}
		if(temp > cout)
		{
			cout = temp;
			num = a[i];
		}
	}
	printf("\nPhan tu xuat hien nhieu nhat la %d voi %d lan", num, cout+1);
}
main()
{
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	input_array(a,n);
	printf("Mang vua nhap la: ");
	output_array(a,n);
	sonhieu(a,n);
}