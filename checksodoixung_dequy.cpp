#include<stdio.h>

int checkdoixung(int n)
{
    int songuoc = 0;
    do
    {
        songuoc = (songuoc*10) + n%10;
        n /= 10;
    }
    while (n != 0);
    return songuoc;
}
int main()
{
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    if(checkdoixung(n) == n)
    {
        printf("%d la so doi xung!", n);

    }
    else
    {
        printf("%d khong phai la so doi xung!", n);
    }
    //printf("%d", checkdoixung(n));

}