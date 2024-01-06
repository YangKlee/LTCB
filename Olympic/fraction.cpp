#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct fractionList
{
    int *tu;
    int *mau;
};
int number_of_element = 0;
void input(struct fractionList &list)
{


    FILE *f;
    f = fopen("fraction.INP", "r");
    fscanf(f,"%d", &number_of_element);
    list.mau = (int *) malloc(number_of_element * sizeof(int ));
    list.tu = (int *) malloc(number_of_element * sizeof(int ));
    for (int i = 0; i < number_of_element; ++i)
    {
        int n;
        int tu = 1;
        int mau = 1;
        fscanf(f, "%d", &n);
        for (int j = 1; j <= n*2; ++j)
        {
            int temp;
            fscanf(f, "%d", &temp);
            if(j <= n)
                tu*=temp;
            else
                mau *= temp;

        }
        list.tu[i] = tu;
        list.mau[i] = mau;
    }
    fclose(f);
}
void output(int a[])
{
    FILE *f;
    f = fopen("fraction.OUT", "w");
    for (int i = 0; i < number_of_element; ++i)
    {
        if(a[i] == 1)
            fprintf(f, "finite\n");
        else
            fprintf(f,"repeating\n");
    }
    fclose(f);
}
int detect_ngto(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int type_fraction(int mau)
{
    /* value return
     * 1: finite
     * 0: repeating
     */
    for (int i = 2; i < mau; ++i)
    {
        if(i != 5 && i !=2 && detect_ngto(i) == 1)
        {
            if(mau % i == 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    struct fractionList list;
    input(list);
    //DEBUG: printf("%d/%d", list.tu[0], list.mau[0]);
    int *result = (int *) malloc(number_of_element*sizeof (int ));
    for(int i = 0; i < number_of_element; i++)
    {
        //printf("%d/%d\n", list.tu[i], list.mau[i]);
        if(type_fraction(list.tu[i], list.mau[i]))
        {
            result[i] = 1;
        }
        else
        {
            result[i] = 0;
        }
    }
    output(result);


}