#include <stdio.h>



int main()

{

  int age;

  printf("\nEnter an age : ");

  scanf("%d",&age);

  if(age <= 0 || age >= 125)

    {

      printf("That's not a valid age");

    }

  else

    {

      printf("\nYou are : ");



      if(age > 0 && age < 18)

	printf("A Child\n");

      else if(age > 18 && age < 65)

	printf("An Adult\n");

      else printf("A Senior Citizen\n");

    }



  return 0;



}

