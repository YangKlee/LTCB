#include<stdio.h>
int main()
{
	int n,so, so_dao = 0,num = 0;
	printf("Nhap so: ");scanf("%d", &n);
	so = n;
	while(n!=0)
	{
		

		num = so%10; // lay chu so cuoi
		so_dao = (so_dao*10)+num;
		so = so/10;
		if(so/10 == 0 && so%10 == 0 ) // dieu kien dung
		{
			break;
		}
		//printf("%d %d %d\n", so/10, so%10, so_dao); // debug

		
	}
	if(n == so_dao)
	{
		printf("%d la so doi xung", n);
	}
	else
	{
		printf("%d la so khong doi xung", so_dao);
	}
	
}