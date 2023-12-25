#include<stdio.h>
#include<stdlib.h>
long sum_n(int n)
{
    long sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum+= i;
    }
    return sum;
}
void input(int &n, int &S)
{
    FILE *f;
    f = fopen("cows.INP", "r");
    fscanf(f,"%d%d", &n, &S);
    fclose(f);
}
void output(int n)
{
    FILE *f;
    f = fopen("cows.INP", "r");
    fprintf(f,"%d", n);
    fclose(f);
}
int main()
{
    int n,S;
    input(n,S);
    output(sum_n(n)- S);

}