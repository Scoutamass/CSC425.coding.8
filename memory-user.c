#include <stdio.h>   
#include <stdlib.h> 
#include <unistd.h>

int main(int argc, char* argv[])
{
  if(argc < 2) return -1;
  int* mem = malloc(atoi(argv[1])*1024*1024);
  for(int i = 0; i < 100000000; i++) for(int j = 0; j < atoi(argv[1])*1024*1024/sizeof(int); j++) mem[j];
  free(mem);
  return 0;
}
