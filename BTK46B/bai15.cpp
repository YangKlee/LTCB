#include<stdio.h>
#include<math.h>
int main()
{
	int n ;
	double s4 ,s5;
	long long int s6;
	unsigned long long int s7;
	
	while(1)
	{
		printf("Nhap n: ");scanf("%d", &n);	
		if(n > 0)
		{
			
			break;
		}
		printf("N phai lon hon 0\n");
	}
	s4= s6  = 0;
	s5 = 1.0;
	s7 =  1;
	for (int i = 1; i<=n ; i++)
	{
		s4 += (pow(-1,i-1)/pow(2*i,2));
		s5 *= ((double)(2*i-1))/((double)(2*i)); //ep kieu phep chia de dong nhat kieu du lieu hai ve
		//s5 *= 2.2;
		s6 += (pow(-1,i-1)*i*(i+1)*(i+2));
		if(i %2 == 0){
			s7 *= i;
		}
		else
		{
			s7 *= i;
		}
	}
	printf("Voi n = %d thi ket qua la:\nS4= %.10lf\nS5= %.10lf\nS6= %lli\nS7= %llu", n,s4,s5,s6,s7);
	
}
/*
Bien s7 van con hien tuong tran so khi n qua lon
*/
