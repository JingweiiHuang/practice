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
        printf("�����s�J����");
    }else{
        acct -> money += amount;
    }
    
}

void withdraw(Account *acct , double amount)
{
    if (amount > acct->money)
    {
        printf("�l�B����");
    }else{
        acct -> money -= amount;
    }
    
}

int main(void)
{
    Account acct1 = {"123-456-789" , "justin" , 1000};
    deposit(&acct1 , 500);
    withdraw(&acct1 , 800);

    printf("�b��l�B:%s, %s, %f\n" , acct1.id , acct1.name , acct1.money);

    system("pause");
    return 0;
}