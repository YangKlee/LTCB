#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap hai so a, b: "); scanf("%d%d", &a, &b);
	c = a; a = b; b =c;
	printf("Hoan vi cua hai so la: %d %d", a, b);
	
}
