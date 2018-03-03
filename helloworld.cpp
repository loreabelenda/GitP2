#include <stdio.h>

int ItsOk(){
  return 0;
}

void Hello(){
  printf("Hello");
}

int main(){
  printf("Hello world!");
  Hello();
  return ItsOk();
}
