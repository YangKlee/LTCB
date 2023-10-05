#include<stdio.h>
int main()
{
	int n, n_10, n_5, n_2, n_1;
	printf("Nhap so tien nguyen n dong: "); scanf("%d", &n);
	n_10 = n/10;
	n = n% 10;
	n_5 = n/5;
	n = n%5;
	n_2 = n/2;
	n = n%2;
	n_1 = n/1;
	n = n%1;
	printf("Voi so tien la %d dong\nTa co: \n%d to 10 dong \n%d to 5 dong \n%d to 2 dong \n%d to 1 dong", n,n_10, n_5, n_2, n_1 );
	
		
}
