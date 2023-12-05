#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    getchar();
    gets(b);
    char *p = strstr(a,b);
    printf("Vi tri xuat hien:%s",p);
    return 0;
}