#include <stdio.h>

void recurse(int a); //  бесконечная рекурсия
void normalrecurse(int a); //  рекурсия с условием выхода , return; играет по сути роль break в void функции
int factorial(int a); //рекурсивный факториал, функция вызывает сама себя n раз fact(a) * fact(a-1) * fact(a-2) * fact(a = 1)

int main(){
  int a;
  scanf("%d",&a);
  printf("%d",factorial(a));
  //recurse(a);
  normalrecurse(a);
  return 0;
}

int  factorial(int a){
  if (a == 1){
      return 1;

  }else {
      return a * factorial(a-1);
  }
}

void recurse(int a){
  printf("%d",a);
  recurse(a-1);
}

void normalrecurse(int a){
  printf("%d\n",a);
  if (a <= 0){
    return; 
  } else {
    normalrecurse(a-1);
  }
}
