#include<stdio.h>
#include<string.h>
#include<unistd.h>
struct UserLogin
{
    char username[100];
    char password[100];
};
int verify_file()
{
    return access("password.dat", F_OK);
}
void create_password(UserLogin user)
{
    printf("Ban chua tao mat khau! Hay tao mat khau !\n");
    printf("Nhap username");
    gets(user.username);
    fflush(stdin);
    printf("Nhap mat khau: ");
    gets(user.password);
}
void write_file(UserLogin user) {
    FILE *f;
    f = fopen("pa")
    fwrite(&user, 1, sizeof(UserLogin), f);



}

int main()
{
    struct UserLogin user1;
    printf("Vui long lua chon: \n");
    if(verify_file() == -1)
    {
        create_password(user1);
    }


}
