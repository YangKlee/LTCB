#include<stdio.h>
main()
{
	float x,e,s,t,dau;
	int n;
	dau = -1.0;
	n = 1;
	x = 1.0;
	s = t = x;
	while(t>=e)
	{
		n = n+2;
		t = t*(x*x/(n*(n-1)));
		s = s+dau*t;
		dau = -dau;
	}
	printf("%.20f", s);
}