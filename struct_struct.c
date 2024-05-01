#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

    typedef const char * String;

    typedef struct {
    struct Account{
        String id;
        String name;
        double money;
    };

        struct Account acct2;
        double overdraft;
    }checking;
    
    void deposit(checking* acct1 , double amount)
    {
        if (amount <= 0)
        {
            printf("error\n");
        }else{
            acct1-> acct2.money += amount;
        }
    }

    void withdraw(checking* acct1 , double amount)
    {
        if (amount > acct1->acct2.money)
        {
            printf("error");
        }else{
            acct1->acct2.money   -= amount;
        }
        
    }


int main(void)
{
    checking  acct = {
                .acct2 = {"123-45" , "hello" , 700} , 
                .overdraft = 3000
         };

    deposit(&acct , 500);
    withdraw(&acct , 400);
    printf("account:%s, %s, %f\n" , acct.acct2.id , acct.acct2.name , acct.acct2.money);


    system("pause");
    return 0;
}