#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 18072005;
    int *prt;
    // luu dia chi cua bien a
    prt = &a;
    printf("Dia chi cua bien a: %d", &a);
    printf("\nGia tri cua con tro ptr: %d", prt );
    // in ra gia tri bien a - toan tu giai tham chieu
    printf("\nGia tri cua bien ma con tro dang tro toi %d", *prt);
    // thay doi gia tri bien a qua con tro
    *prt = 2005;
    printf("\nGia tri bien a la %d", a);
    printf("\nGia tri cua bien ma con tro dang tro toi %d", *prt);
}
