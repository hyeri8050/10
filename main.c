#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char src[30] = "happy C programming"; 
  
  printf("문자열 \"%s\"의 길이 : %i\n", src, strlen(src) ); 

  system("PAUSE");	
  return 0;
}
