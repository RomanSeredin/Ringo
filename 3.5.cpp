#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MAX 100

srand(time(0)); 
buf = rand() % MAX; 

buf = rand % MAX - (MAX / 2);

int array_fill(int *arr, int len, int max) {
  int max_h = max / 2;
  int len_h = len / 2;
  int buf;
  int p = 0; 
  int n = 0; 
  int i = 0;

  srand(time(0));
  
  while(i < len) {
    buf = rand() % max - max_h;
 
    if((buf < 0) && (n < len_h)) {
      arr[i] = buf;
      n++;
      i++;
                                 }

    if((buf >= 0) && (p < len_h)) {
      arr[i] = buf;
      p++;
      i++;
                                  }
    
                 }
getchar();
  return 0;
                                            }


