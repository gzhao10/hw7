#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void average(int* arr, int size){
  double sum;
  int i;
  for (i = 0; i < size; i++){
    sum += *(arr + i);
  }
  double ans = sum/size;
  printf("average: %f\n\n", ans);
}

void copy(int* a, int* b, int size){
  int i;
  for (i = 0; i < size; i++){
    *(b + i) = *(a+i);
  }
  for (i = 0; i < size; i++){
    printf("b[%d]: %d\n", i, *(b+i));
  }
  printf("\n");
}

void length(char* s){
  int length = 0;
  while (*s){
    length++;
    s++;
  }
  printf("length: %d\n", length);
}



int main(){
  //problem 1
  int arr[3];
  arr[0] = 29;
  arr[1] = 30;
  arr[2] = 40;
  average(arr, 3);

  //problem 2
  int a[5];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;
  int b[5];
  copy(a, b, 5);

  //problem 3
  char s[] = "Hello";
  length(s);

  printf("\n");
  //exercises
  char copy1[20] = "abc";
  char copy2[] = "apples";
  strcpy(copy1, copy2);
  printf("copy2: %s\n", copy2);

  char cat1[20] = "This is a ";
  char cat2[] = "test";
  strcat(cat1, cat2);
  printf("cat1: %s\n", cat1);

  printf("comparison: %d\n", strcmp("cat","bat"));

  char find[] = "Good night";
  char x = 'n';
  printf("address: %p\n", strchr(find,x));
}
