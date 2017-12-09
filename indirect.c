/* indeirect.c Illustrate indirection */
#include <stdio.h>
int main(){
  int i = 7;
  int* ip = &i;

  printf("Address %p contains %d\n", ip, *ip);
  *ip = 8;
  printf("Now Address %p constains %d \n",ip, *ip);
  printf("The value of i is now %d \n", i);
  return 0;
}