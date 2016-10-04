#include <stdio.h>
#include <math.h>

// This program will allow the users to type in two numbers, and choose what kind
// of math operation to use.


int main () {

	int numberone;
	int numbertwo;

	// This comes in later, store the type of math the user would like.
	int mathtype;

	printf("\nLet's get started! Type a number: ");
	scanf("%d", &numberone);

	printf("\nGood stuff! Type in another number: ");
	scanf("%d", &numbertwo);

	printf("\nLast question, I promise! Would you like to add, subtract, multiply, or divide? (type 1, 2, 3, or 4 respectively.): ");
	scanf("%d", &mathtype);
	printf("%d\n", mathtype);


		if (mathtype == 1) {
		
			printf("\nOkay, let's do some addition!\n");

			int totaladdition;

			totaladdition = numberone + numbertwo;

			printf("The added result is: ");
			printf("%d\n", totaladdition);
		
			}

		if (mathtype == 2) {
			
			printf("\nOkay, let's do some subtraction!\n");

			int totalsubtraction;

			totalsubtraction = numberone - numbertwo;

			printf("The subtracted result is: ");
			printf("%d\n", totalsubtraction);
		
			}

		if (mathtype == 3) {
		
			printf("\nOkay, let's do some multiplication!\n");

			int totalmultiplication;
			
			totalmultiplication = numberone * numbertwo;

			printf("The multiplicated result is: ");
			printf("%d\n", totalmultiplication);

			}

		if (mathtype == 4) {
		
			printf("\nOkay, let's do some division!\n");

			int totaldivision;

			totaldivision = numberone / numbertwo;

			printf("The divided result is: ");
			printf("%d\n", totaldivision);

			}


		else {
			printf("\nI am sorry, but option: ");
			printf("%d", mathtype);
			printf(" is not valid. Please choose either 1, 2, 3, or 4. Exiting...\n");


		}

	return 0;


}
