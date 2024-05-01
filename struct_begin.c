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

Account acct2 = {"223-456-787" , "Justin Li" , 3000};

void printAcct(Account acc)//將acct的值複製過來給他
{
    printf("Account(%s, %s, %f)\n" , acc.id , acc.name , acc.money + 1000);
}


int main(void)
{
    Account accts[] = {
        {"123-456-789" , "Justin Lin" , 2000} , 
        {"124-457-788" , "Justin Huang" , 5000} 
    };
    Account acct;
    acct.id = "123-456-789";
    acct.name = "Justin Lin";
    acct.money = 1000;
    printf("Account(%s, %s, %f)\n" , acct.id , acct.name , acct.money);
    printAcct(acct);
    printAcct(acct2);

    for (int i = 0; i < 2; i++)
    {
        printAcct(accts[i]);
    }
    

    system("pause");
    return 0;
}