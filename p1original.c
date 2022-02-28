#include <stdio.h>
void input(int *num1, int*den1 ,int*num2,int* den2);
{
  printf("enter the frist fraction\n");
  scanf("%d",num1, num1);
  printf("enter the secon fraction\n");
  scanf("%d", num2 ,num2);
}

 void find_sum(int num1, int den1, int num2, int den2, int*num3, int*den3)
{
  int sum1 = 0;

  sum1 = (num1/den1)+(num2\den2);
  }

void output(int num1, int den1, int num2, int den2, int num3, int den3);
{
  printf("%d%d + %d%d = %d%d",num1, den1, num2, den2, num3, den3  );
}
int main()
{
  int num1, den1, num2, den2, num3, den3;
  input(&num1, &den1, &num2, &den2);
  find_sum(num1, den1, num2, den2, num3, den3);
  return 0;
}