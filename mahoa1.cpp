//Ma hoa bang cach dao nguoc chuoi va convert sang ma ascii va cong cho key
#include<stdio.h>
#include<string.h>
void dao_chuoi(char a[]);
void ma_hoa()
{
    char text[1000];
    int key;
    fflush(stdin);
    printf("Nhap xau can ma hoa: ");
    gets(text);
    dao_chuoi(text);
    printf("Nhap key(>10) = ");
    scanf("%d", &key);
    for(int i = key; i >=0; i--)
    {
        if(key%i == 0)
        {
            key = i;
            break;
        }
    }
    for(int i = 0; i < strlen(text); i++)
    {
        (int)text[i] += key
    }



}
void dao_chuoi(char a[])
{
    char temp[100];
    for(int i = 0; i < strlen(a); i++)
    {
        temp[i] = a[strlen(a)-1 - i];
    }
    strcpy(a,temp);
    //puts(temp);

}
int main()
{
    int choose;
    printf("Vui long chon: \n1.Ma hoa text\n2.Giai ma text\n");
    scanf("%d", &choose);
    if(choose == 1)
    {
        ma_hoa();
    }
    else if(choose == 2)
    {

    }
    else
    {
        printf("Lua chon khong hop le");
    }
}