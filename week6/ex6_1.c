#include <stdio.h>



int main(void)

{

  char ch1, ch2, ch3;

  char alpha_first;

  printf("Enter three uppercase or three lowercase letters: ");

  scanf("%c%c%c", &ch1, &ch2, &ch3);

  if (ch1 < ch2)

    alpha_first = ch1;

  else

    alpha_first = ch2;

  if (ch3 < alpha_first)

    alpha_first = ch3;

  printf("%c is the first letter alphabetically.\n",alpha_first);

  return (0);

}

