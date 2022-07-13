#include <stdio.h>
#include <stdlib.h>
main(){
  unsigned int x;
  x = 0;
  while(x >= 0){
    printf("%u\n", x);
    x++;
  }
  exit(EXIT_SUCCESS);
}
