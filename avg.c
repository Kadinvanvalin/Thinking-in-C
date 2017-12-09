#import  <stdio.h>
int main(){
  int num1, num2;
  float sum;

  puts("Enter the 1st number");
  scanf("%d", &num1);
  puts("Enter the second number");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("The average is %10.2f\n", sum/2);
  return 0;
}