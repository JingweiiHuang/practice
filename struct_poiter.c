#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef const char * String;

typedef struct
{
    String id;
    String name;
    double money;
}Account;

void deposit(Account *acct , double amount)
{
    if (amount <= 0)
    {
        printf("必須存入正數");
    }else{
        acct -> money += amount;
    }
    
}

void withdraw(Account *acct , double amount)
{
    if (amount > acct->money)
    {
        printf("餘額不足");
    }else{
        acct -> money -= amount;
    }
    
}

int main(void)
{
    Account acct1 = {"123-456-789" , "justin" , 1000};
    deposit(&acct1 , 500);
    withdraw(&acct1 , 800);

    printf("帳戶餘額:%s, %s, %f\n" , acct1.id , acct1.name , acct1.money);

    system("pause");
    return 0;
}