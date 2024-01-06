#include<stdio.h>

int checkdoixung(int n)
{
    int songuoc = 0;
    int temp = n;
    do
    {
        songuoc = (songuoc*10) + n%10;
        n /= 10;
    }
    while (n != 0);
    if(songuoc == temp)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);
    if(checkdoixung(n) == 1 )
    {
        printf("%d la so doi xung!", n);

    }
    else
    {
        printf("%d khong phai la so doi xung!", n);
    }
    printf("%d", checkdoixung(n));

}