#include<stdio.h>
void sum( int *a) // co tham so la con tro int
{
    *a += 100; // toan tu giai tham chieu
}
int main()
{
    int a = 100;
    sum(&a);
    printf("%d", a);
}