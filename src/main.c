// main.c
#include <stdio.h>

int main(int argc, char const *argv[])
{
  char name[50];
  printf("Hello, what's your name?\n");
  scanf("%s", name);
  printf("Hello %s\n", name);
  return 0;
}
