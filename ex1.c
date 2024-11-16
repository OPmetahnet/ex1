/******************
Name:
ID: 212320733
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int number, position;

  printf("Please enter a number:\n");
  scanf("%d", &number);

  printf("Please enter a position:\n");
  scanf("%d", &position);

  //isolating our bit and on the right then performing & 1 to check it individualy
  int check_bit = number >> position;
  check_bit = check_bit & 1;

  printf("The bit in position %d of number %d is: %d\n", position, number, check_bit);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("Please enter a number:\n");
  scanf("%d", &number);//reusing our number variable for memory efficiency

  int temp = number;//saving the number for the second part calculation

  printf("Please enter a position:\n");
  scanf("%d", &position);//reusing our position variable for memory efficiency

  int set_bit = 1 << position;//isolation of the open bit at the chosen position
  number = number | set_bit;//turning on the bit at the position we chose
  printf("Number with bit %d set to 1: %d\n", position, number);

  set_bit = ~set_bit;//flipping the bits in order to turn off the bit we chose
  temp = temp & set_bit;

  printf("Number with bit %d set to 0: %d\n", position, temp);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &number);//reusing number for memory efficiency

  printf("Please enter a position:\n");
  scanf("%d", &position);//reusing position for memory efficiency

  set_bit = 1 << position;
  number = number ^ set_bit;//toggling like this works since 0^0=0, 1^0=1

  printf("Number with bit %d toggled: %d\n", position, number);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  printf("Please enter a number:\n");
  scanf("%d", &number);//reusing number for memory efficiency

  //isolating the rightmost bit, which represents 1(odd if on) and flipping it
  number = 1 - (number & 1);
  printf("%d\n", number);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int number1, number2;

  printf("Please enter the first number (octal):\n");
  scanf("%o", &number1);//getting a number in octal base

  printf("Please enter the second number (octal):\n");
  scanf("%o", &number2);

  //summation of both numbers, followed by its printing in upper case hex base(0x)
  int sum = number1 + number2;
  printf("The sum in hexadecimal: %X\n", sum);

  //not using \n in order to be able to print each bit separately
  printf("The 3,5,7,11 bits are: ");

  //printing the 3rd bit
  int bit_to_print = (sum >> 3) & 1;
  printf("%d", bit_to_print);

  //printing the 5th bit
  bit_to_print = (sum >> 5) & 1;
  printf("%d", bit_to_print);

  //printing the 7th bit
  bit_to_print= (sum >> 7) & 1;
  printf("%d", bit_to_print);

  //printing the 11th bit
  bit_to_print = (sum >> 11) & 1;
  printf("%d\n", bit_to_print);

  printf("Bye!\n");

  return 0;
}
