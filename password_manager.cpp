//chuong trinh quan li mat khau!
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <unistd.h>

struct AccountInfo{
    char username[100];
    char password[100];
};
struct AccountInfo user1;
void press_enter_to_continue()
{
    char enter[0];
    printf("\nPress enter to continue ... ");
    fflush(stdin);
    gets(enter);
    //system("cls");

}
void save_file(char account_type[], AccountInfo user)
{
    FILE *f;
    char filename[30];
    strcpy(filename,account_type);
    strcat(filename, ".dat");
    f = fopen(filename, "w");
    fwrite(&user,1, sizeof(struct AccountInfo), f);
    fclose(f);
}
void menu();
void create_password(char account_type[], AccountInfo user)
{
    printf("\nTao mat khau tai khoan %s", account_type);
    printf("\n- Nhap ten dang nhap: ");
    fflush(stdin);
    gets(user.username);
    printf("- Nhap mat khau: ");
    fflush(stdin);
    gets(user.password);
    save_file(account_type, user);
    printf("Tao thanh cong!");

}
int verify_user(int PIN)
{
    int KEY;
    FILE *f;
    f = fopen("verify.dat", "r");
    fread(&KEY, 1, sizeof(int),f);
    fclose(f);
    if(PIN == KEY)
        return 1;
    else
        return 0;
}
void create_pin()
{
    int PIN;
    printf("\nNhap ma pin: ");
    scanf("%d", &PIN);
    FILE *f;
    f = fopen("verify.dat", "w");
    fwrite(&PIN, 1, sizeof(int), f);
    fclose(f);
    printf("\nTao ma pin thanh cong! Vui long khoi dong lai chuong trinh!");
    press_enter_to_continue();
    exit(0);
}
void read_file(char account_type[], AccountInfo &user)
{
    FILE *f;
    char filename[30];
    strcpy(filename,account_type);
    strcat(filename, ".dat");
    f = fopen(filename, "r");
    if(access(filename, F_OK) == -1)
    {
        printf("Khong ton tai file tai khoan, vui long tao moi!");
        create_password(account_type, user);
        fclose(f);
        press_enter_to_continue();
        menu();

    }
    fread(&user,1, sizeof(struct AccountInfo), f);
    fclose(f);

}

void menu()
{
    printf("Chon nen tang de lay tai khoan va mat khau!.");
    const int number_account = 6;
    char account_type[number_account][20] = {"Facebook", "Zalo", "Google", "Mihoyo", "Spotify", "QNU University"};
    for(int i = 0; i < number_account; i++)
    {
        printf("\n%d.%s", i+1, account_type[i]);
    }
    int choose_account, choose;
    printf("\nNhap lua chon: ");
    scanf("%d", &choose_account);
    printf("\nBan da chon tai khoan %s, vui long lua chon: ", account_type[choose_account-1]);
    printf("\n1. Xem mat khau\n2.Sua mat khau");
    printf("\nNhap lua chon: ");
    scanf("%d", &choose);
    if(choose == 1)
    {
        read_file(account_type[choose_account-1], user1);

        printf("==================================\n");
        printf("Tai khoan nen tang %s la:\n", account_type[choose_account-1]);
        printf("Username: ");
        puts(user1.username);
        printf("Password: ");
        puts(user1.password);
        printf("==================================\n");
    }
    else if(choose == 2)
    {
        create_password(account_type[choose_account-1], user1);
    }
    press_enter_to_continue();
    menu();

}
int main()
{
    if(access("verify.dat", F_OK) == -1)
    {
        printf("\nBan chua tao ma PIN, de bao mat vui long tao ma pin de tiep tuc");
        create_pin();
    }
    else
    {
        int PIN;
        printf("\nNhap ma PIN: ");
        scanf("%d", &PIN);
        if(verify_user(PIN))
        {
            menu();
        }
        else
        {
            printf("\nMa PIN sai!");
            press_enter_to_continue();
            exit(0);
        }

    }
    menu();
}