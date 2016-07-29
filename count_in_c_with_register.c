#include <stdio.h>
#include <time.h>

void main() {
  register int i;
  clock_t begin = clock();
  while (i < 1000000000){
    i+=1;  
  }
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("%f\n",time_spent);
  return;
}

