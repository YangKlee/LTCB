#include<stdio.h>
int uoc(int so)
{
    for(int i = so-1; i >= 2; i--)
    {
        if(so%i ==0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Uoc cua %d la : %d", n, uoc(n));

}