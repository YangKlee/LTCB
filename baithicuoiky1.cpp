#include<stdio.h>
#include<math.h>
int chieu_vct;
void input_vct(int a[], char vct)
{
    for(int i = 0; i < chieu_vct; i++)
    {
        printf("%c[%d] = ", vct, i+1);
        scanf("%d", &a[i]);
    }
}
float do_dai(int a[])
{
    int sum = 0;
    for(int i = 0; i < chieu_vct; i++)
    {
        sum += pow(a[i],2);
    }
    return sqrt(sum);
}
int check_cungphuong(int a[], int b[])
{
    float ptgoc = (float)a[0]/(float)b[0];
    for(int i = 1; i < chieu_vct; i++)
    {
        if(ptgoc != ((float)a[i] /(float)b[i]))
        {
            return 0;
        }
    }
    return 1;
}
void ghi_file(int a[])
{
    FILE *f;
    f = fopen("vector.txt", "w");
    fprintf(f,"%d\n", chieu_vct);
    for(int i = 0; i < chieu_vct; i++)
    {
        fprintf(f,"%d ", a[i]);
    }
    fclose(f);
}
int sum_file()
{
    int chieu, sum = 0;
    FILE *f;
    f = fopen("vector.txt", "r");
    fscanf(f, "%d", &chieu);

    for (int i = 0; i < chieu; i++)
    {
        int a;
        fscanf(f,"%d", &a);
        sum += a;
    }
    fclose(f);
    return sum;
}
int main()
{
    printf("Nhap chieu vector: ");
    scanf("%d", &chieu_vct);
    int a[chieu_vct], b[chieu_vct];
    printf("Nhap vector A: \n");
    input_vct(a,'A');
    printf("Nhap vector B: \n");
    input_vct(b,'B');
    printf("\nDo dai cua vector A la: %.3f", do_dai(a));
    if(check_cungphuong(a,b))
    {
        printf("\nHai vector la hai vector cung phuong");
    }
    else
    {
        printf("\nHai vector la hai vector khong cung phuong");
    }
    ghi_file(b);
    printf("\nTong toa do vector la: %d", sum_file());

}