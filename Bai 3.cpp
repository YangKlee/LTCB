#include <stdio.h>
int main()
{
	int cd,cr;
	printf("Nhap chieu dai, chieu rong cua hcn: "); scanf("%d%d", &cd, &cr);
	printf("Chu vi hinh chu nhat la: %d \n", (cd+cr)*2);
	printf("Dien tich hinh chu nhat la: %d",cd*cr);
}
