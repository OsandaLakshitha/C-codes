#include <stdio.h>

int main()
{
  int num;
  
  printf("Enter any number : ");
  scanf("%d",&num);
 
  if (num >= 0)
  {
    if (num > 0)
      printf("\n%d is Positive", num);
    else
      printf("\nYou have entered Value zero.");
  }
  else
    printf("\n%d is Negative", num);
  
 return 0;
}