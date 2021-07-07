#include <stdio.h>

int main(void) {
  int i1,i2;
  i1=printf("[%5d] [%+05d] [%#5o] [%#7x]\n", 123, 1234, 123, 123);
  i2=printf("[%f] [%5.2f] [%+05.0f]\n", 123.456, 123.456, 123.456);
  
  printf("%d , %d" , i1,i2);
  return 0;
}

