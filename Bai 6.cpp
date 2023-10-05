#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,p;
	double s;
	printf("Nhap a,b,c lan luot la do dai ba canh tam giac: ");
	scanf("%d%d%d", &a,&b,&c);
	// cong thuc heron
	p = ((a+b+c)/2);
	s = sqrt(p*(p - a)*(p-b)*(p-c));
	printf("Dien tich tam giac la: %.3f", s);
	
}

