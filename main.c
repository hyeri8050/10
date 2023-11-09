#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char src[] = "The worst things to eat before you sleep"; 
  char dst[100]; //dst : destination
  
  strcpy(dst, src); //배열의 이름만 넣으면 됨 
  
  printf("copied string : %s\n", dst);
  
  system("PAUSE");	
  return 0;
}
