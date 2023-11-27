#include<stdio.h>
#include<string.h>
void convert_ascii(char a[])
{
    printf("Day ma ascii la: ");
    for(int i = 0; i < strlen(a); i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    char text[100];
    printf("Nhap sau: ");
    gets(text);
    convert_ascii(text);

}
