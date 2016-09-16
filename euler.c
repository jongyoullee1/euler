#include <stdio.h>
#include <stdlib.h>

int bleh() {
  int i;
  int a=0;
  for(i=1;i<1000;i=i+1) {
    if (i%3==0) {
      a=a+i;
      continue;
    }
    if (i%5==0) {
      a=a+i;
      continue;
    }
  }
    return a;
}

int main() {
  printf("%d\n",bleh());
  return 0;
}
