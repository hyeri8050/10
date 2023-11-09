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
  
  //2. ������ �о ���� ��� 
  while( (c = fgetc(fp)) != EOF) //�ѱ��� ������ �������� �ƴϸ� 
  {
     putchar(c); //�ѱ��� ��� 
  }
      
  //3. close file
  fclose(fp);
  
  system("PAUSE");	
  return 0;
}
