#include<stdio.h>
#include<string.h>
int xuli(char xau[], char tu[])
{
    int dem = 0;
    for(int i = 0; i <= strlen(xau)-strlen(tu); i++)
    {
        if(xau[i] == tu[0])
        {
            int temp = 0;
            for(int j = 1; j < strlen(tu); j++)
            {

                if(xau[i+j] == tu[j])
                {
                    temp++;
                }
            }
            if(temp == strlen(tu)-1)
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    char xau[100], tu[100];
    printf("Nhap xau: ");
    gets(xau);
    printf("Nhap tu can tim: ");
    gets(tu);
    printf("\nSo lan xuat hien cua tu la: %d", xuli(xau, tu));
    return 0;
}