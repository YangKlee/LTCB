#include<stdio.h>
main()
{
	int tuoi;
	printf("Nhap tuoi: ");
	scanf("%d", &tuoi);
	if (tuoi < 16)
	{
		printf("Vo tu");
	}
	else if (tuoi > 16)
	{
		printf("Du tuoi an duoc");
	}

}


