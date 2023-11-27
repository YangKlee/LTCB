#include<stdio.h>
#include<string.h>
int dem_chu_hoa(unsigned char c[])
{
	int cout = 0;
	for(int i = 0; i < strlen(c); i++)
	{
		if((int)c[i] >= 65 && (int)c[i] <= 90)
		{
			cout++;
		}
	}
	return cout;
}
void lap_xau(unsigned char c[], int n)
{
	char sau_lap[n*strlen(c)];
	for (int i = 0; i <= n; ++i) 
	{
		// them noi dung xau thu hai vao cuoi xau thu nhat
        strcat(sau_lap, c);
	
	}
}
void vi_tri_nguyen_am(unsigned char c[])
{
	printf("\nVi tri cac nguyen am");
	char nguyen_am[] = "UEOAIueoai";
	for(int i = 0; i < strlen(c); i++)
	{
		for(int j = 0; j < strlen(nguyen_am); j++)
		{
			if(c[i] == nguyen_am[j])
			{
				printf("%d ", i+1);
			}
		}
	}
}
void tach_ten(unsigned char c[])
{
	int loc_last_space = 0;
	for(int i = 0; i < strlen(c); i++)
	{
		if(c[i] == ' ' &&c[i+1] != ' ')
		{
			loc_last_space = i;
			//printf("DEBUG: %d", loc_last_space);
		}
	}
	printf("\nTen da nhap la: ");
	for(int i = loc_last_space; i < strlen(c); i++)
	{
		printf("%c", c[i]);
	}
}
main()
{
	unsigned char chuoi[100];
	int n;
	printf("Nhap chuoi: ");
	gets(chuoi);
	printf("\nSo chu in hoa trong chuoi vua nhap la: %d", dem_chu_hoa(chuoi));
	vi_tri_nguyen_am(chuoi);
	tach_ten(chuoi);
	printf("\nNhap so lan lap lai cua sau: ");
	scanf("%d", &n);
	
	
	
}