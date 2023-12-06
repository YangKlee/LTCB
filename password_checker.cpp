#include<stdio.h>
#include<string.h>

int check_num(char a[])
{
    for(int i = 0; i < strlen(a); i++)
    {
        if((int)a[i] >= 48 && (int)a[i] <= 57)
        {
            return 1;
        }

    }
    return 0;
}
int check_hoa(char a[])
{
    for(int i = 0; i < strlen(a); i++)
    {
        if((int)a[i]>= 65 && (int)a[i] <= 90)
        {
            return 1;
        }

    }
pa
    return 0;
}
int check_kytu(char a[])
{
    for(int i = 0; i < strlen(a); i++)
    {
        if(((int)a[i] >= 33 &&(int)a[i] <= 47) || ((int)a[i] >= 58 &&(int)a[i] <= 64) )
        {
            return 1;
        }

    }
    return 0;
}
int check_pass(char a[])
{
    if(strlen(a) > 8 && check_hoa(a) && check_kytu(a) && check_num(a))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main() {
    char pass[100];

    while(1)
    {
        printf("\n  Nhap mat khau: ");
        gets(pass);
        if(check_pass(pass))
        {
            printf("\nMat khau an toan!");
        }
        else
        {
            printf("\nMat kau khong an toan");
        }
    }


}