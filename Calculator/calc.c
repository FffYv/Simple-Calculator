#include <limits.h>
#include <stdio.h>

double simpleCalc(double num1, double num2, char operator)
{
  int result;
  if (operator == '+')
  {
    result = num1 + num2;
  }
  else if(operator == '-')
  {
    result = num1 - num2;
  }
  else if(operator == '*')
  {
    result = num1 * num2;
  }
  else if (operator == '/')
  {
    if(num2!= 0)
    result = num1/num2;
  }
  else
  {
    printf("Cannot divide by 0.\n");
    return INT_MIN;
  }
  return result;
}

int main() 
{
  char operator;
  double num1, num2;

  //read the operator for user
  printf("Enter an operator(+, -, *, /): ");
  scanf("%c", &operator);

  //Read the numbers from user
  printf("Enter two operands: ");
  scanf("%lf %lf",&num1, &num2, operator);

  double result = simpleCalc(num1, num2, operator);
  printf("Result: %.2lf\n", result);
  return 0;
}