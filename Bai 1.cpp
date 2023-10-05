#include <stdio.h>
#include <math.h>
int main()
{
	int bk;
	printf("Nhap ban kinh duong tron: ");scanf("%d", &bk);
	printf("Chu vi hinh tron la: %.2f \n", (bk*2)*M_PI);
	printf("Duong kinh hinh tron la: %.2f \n", bk*bk*M_PI);
	
}
