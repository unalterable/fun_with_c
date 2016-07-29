#include <stdio.h>
#include <time.h>

void main() {
  int i;
  clock_t begin = clock();
  for(i = 0; i < 1000000000; i++){
    
  }
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("%f\n",time_spent);
  return;
}

