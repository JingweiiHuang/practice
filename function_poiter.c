#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int add(int num1, int num2);       //�ŧi�[�k�禡
int subtract(int num1, int num2);  //�ŧi��k�禡
int multiply(int num1, int num2);  //�ŧi���k�禡
int divide(int num1, int num2);    //�ŧi���k�禡


int main(void) 
{
  int x, y, choice, result;
  int (*op[4])(int, int);  //�ŧi�}�C�禡���СA�^�ǭȬ���ƫ��A

  op[0] = add;      //�N�[�禡���Цs�J�}�C�禡���Ф�
  op[1] = subtract; //�N��禡���Цs�J�}�C�禡���Ф�
  op[2] = multiply; //�N���禡���Цs�J�}�C�禡���Ф�
  op[3] = divide;   //�N���禡���Цs�J�}�C�禡���Ф�
  printf("��J��Ӿ��: ");
  scanf("%d%d", &x, &y);
  printf("��J0�i�H���[�k,��J1�i�H����k,��J2�i�H�����k,��J3�i�H�����k: ");
  scanf("%d", &choice);
  result = op[choice](x, y);  // ��^�ǭȦs�Jresult��
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

   