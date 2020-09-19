//Augustus Perseghin agp5191
//no collaborators
//9/18


#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n)
{
  
  if(n<10)
  {return n;}
  else
  {return (n%10+digit_sum((int)(n/10)));}
}

int main(void) {
  int varIn = atof(readline("Enter an int: "));
  printf("sum of digits of %i is %i.\n", varIn, digit_sum(varIn));
  return 0;
}