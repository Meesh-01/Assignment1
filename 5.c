
#include <stdio.h>

int main(int argc ,char *argv[]) {



  char hours =  argv[1][0] ;
  int H = hours - '0';

    printf("%d\n", H);

  int seconds = H * 3600;

  printf("The number of seconds in %d hours is %d.\n", H, seconds);

  return 0;
}

