#include "stdio.h"
#include "math.h"
#include "stdlib.h"
bool perfect_number(int n)
{
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if(n%i == 0)
            sum += i;
    }
    if(sum == n)
        return 1;
    return 0;
}
bool chinh_phuong(int n)
{
    if(fmod(sqrt(n), 1.0) == 0)
        return 1;
    return 0;
}
int main()
{

    int n;
    scanf("%d", &n);
    if(perfect_number(n))
        printf("So hoan hao");
    if(chinh_phuong(n))
        printf("so chinh p");



}