#include<stdio.h>
#include<math.h>
int main()
{
	int n,s1,s2,s3;
	s1=s2=0;
	s3 = 1;
	
	printf("Nhap n = ");scanf("%d", &n);
	if( n > 0)
	{
		for(int i = 1; i <= n; i++)
		{
			s1 += i;
			s2 += pow(i,2);
			s3 += pow(2*n+1,2);
		}
		printf("s1 = %d\n", s1/n);
		printf("s2 = %f\n", sqrt(s2));
		printf("s3 = %d\n", s3);
	}
	else
	{
		printf("n phai lon hon 0");
	}
	
}
