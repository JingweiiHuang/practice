#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int add(int num1, int num2);       //宣告加法函式
int subtract(int num1, int num2);  //宣告減法函式
int multiply(int num1, int num2);  //宣告乘法函式
int divide(int num1, int num2);    //宣告除法函式


int main(void) 
{
  int x, y, choice, result;
  int (*op[4])(int, int);  //宣告陣列函式指標，回傳值為整數型態

  op[0] = add;      //將加函式指標存入陣列函式指標中
  op[1] = subtract; //將減函式指標存入陣列函式指標中
  op[2] = multiply; //將乘函式指標存入陣列函式指標中
  op[3] = divide;   //將除函式指標存入陣列函式指標中
  printf("輸入兩個整數: ");
  scanf("%d%d", &x, &y);
  printf("輸入0可以做加法,輸入1可以做減法,輸入2可以做乘法,輸入3可以做除法: ");
  scanf("%d", &choice);
  result = op[choice](x, y);  // 把回傳值存入result中
  printf("%d", result);

  putchar('\n');
    
   system("pause");
    return 0;
}

int add(int x, int y) {
  return(x + y);
}
int subtract(int x, int y) {
  return(x - y);
}
int multiply(int x, int y) {
  return(x * y);
}
int divide(int x, int y) {
  if (y != 0)
    return (x / y);
  else
    return 0;
}

   