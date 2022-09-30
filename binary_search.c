#include <stdio.h>

int binary_search(int* a, int len, int f); // на вход указатель на массив, его длина, элемент который ищем, на выходе индекс элемента,                                                          функция бинарного поиска
void input(int* a, int len);     // на вход указатель на массив и его длина, функция заполнения массива
void output(int* a, int len);    // на вход указатель на массив и его длина, функция вывода массива

int main(){
  int len;
  printf("Длина массива\n");  
  scanf("%d",&len);
  int data[len];
  input(data,len);
  
  printf("Введите число которое надо найти\n");
  int f;
  scanf("%d",&f);

  int x = binary_search(data,len,f);

  if ( x == -1){
    printf("NULL");

  } else {
     printf("%d",x);
  }
  //output(data,len);

  return 0;
}

int binary_search(int* a, int len,int f){
  int first = 0;
  int last = len -1;


  while(first <= last){
    int mid = (first + last) / 2;
    int guess = a[mid];
    
    if (guess == f) {
      return mid;
    } if (guess > f){
      last = mid - 1;
    } else {
      first = mid + 1;
    }

  }
  return -1;
}



void input(int* a, int len){

  for(int i = 0; i < len; i++){
      scanf("%d",&a[i]);
  }
}

void output(int* a, int len){

    for(int i = 0; i < len; i++){
      printf("%d ",a[i]);
    }
}
