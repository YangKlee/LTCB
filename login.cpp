#include<stdio.h>
#include<string.h>
#include<unistd.h>
struct UserLogin
{
    char username[100];
    char password[100];
};
void write_file(UserLogin user);
int verify_file()
{
    return access("password.dat", F_OK);
}
void create_password(UserLogin user)
{
    fflush(stdin);
    printf("Ban chua tao mat khau! Hay tao mat khau !\n");
    printf("Nhap username");
    gets(user.username);
    fflush(stdin);
    printf("Nhap mat khau: ");
    gets(user.password);
    write_file(user);
}
void write_file(UserLogin user) {
    FILE *f;
    f = fopen("password.dat", "w");
    fwrite(&user, 1, sizeof(UserLogin), f);
    fclose(f);
    printf("Tao mat khau thanh cong!");
}
void login(UserLogin user)
{
    char userInput[100];
    char passInput[100];
    FILE *f;
    f = fopen("password.dat", "r");
    fread(&user,1, sizeof(struct UserLogin), f);
    printf("Nhap username: ");
    fflush(stdin);
    gets(userInput);
    printf("Nhap password: ");
    fflush(stdin);

    gets(passInput);
    if(strcmp(userInput, user.username) == 0 && strcmp(passInput, user.password) == 0)
    {
        printf("\nDang nhap thanh cong!");
    }
    else
    {
        printf("\nTen dang nhap hoac mat khau sai!");
    }


}
int main()
{
    struct UserLogin user1;

    if(verify_file() == -1)
    {
        create_password(user1);
    }
    else
    {
        int choose;
        printf("Vui long lua chon: ");
        printf("\n1. Dang nhap");
        printf("\n2. Quen mat khau");
        printf("\n");
        scanf("%d", &choose);
        if(choose == 1)
        {
            login(user1);
        }
        else if(choose ==2)
        {
            create_password(user1);
        }
        
    }
}
