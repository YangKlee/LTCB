#include "stdio.h"



int main()
{
    for (int i = 1; i <= 10; i += !(false)) {
        printf("%d\n", i);
    }
}
