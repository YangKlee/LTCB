#include<stdio.h>
#include<conio.h>
int main()
{
	int i = 0;
	unsigned char c;
	printf("Ma\tKy tu\n");
	for(c = 0; c<256; c++)
	{
		printf("%d\t%c\n", c,c);
		i++;
		if(i == 22)
		{
			getch();
			i = 0;
		}
		
		
	}
	
}