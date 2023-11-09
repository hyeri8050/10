#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  char c;
  
  //1. open file (Read)
  fp = fopen("sample.txt", "r");
  
  //error handling
  if (fp == NULL)
  {
     printf("Failed to open\n");
     return 0;
  }
  
  //2. 파일을 읽어서 내용 출력 
  while( (c = fgetc(fp)) != EOF) //한글자 읽은게 마지막이 아니면 
  {
     putchar(c); //한글자 출력 
  }
      
  //3. close file
  fclose(fp);
  
  system("PAUSE");	
  return 0;
}
