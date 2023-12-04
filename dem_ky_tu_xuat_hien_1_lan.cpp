#include<stdio.h>
#include<string.h>
int cout_tu(char s[])
{
    int dem = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int temp = 0;
        for(int j = 0; j < strlen(s); j++)
        {
            if(s[i] == s[j])
            {
                temp++;
            }
        }
        if(temp == 1)
        {
            dem++;
        }

    }
    return dem;
}
int main()
{
    char s[255];
    printf("Nhap sau ky tu: ");
    fflush(stdin);
    gets(s);
    printf("So tu xuat hien 1 lan la: %d", cout_tu(s));
}