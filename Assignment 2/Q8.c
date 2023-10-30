/*
 * Programmer: Zaid Bin Naveed
 * Date: 23/10/23
 * Desc: finding persistence for indefinite amount of numbers until user enters nothing
 */

#include <stdio.h>
#include <conio.h>

int persistence(int num) 
{
	int count = 0;

	// checking if number is not 1 digit
	while (num > 9) {
		int new_num = 1;

		// find product of all digits
		for (; num > 0; num /= 10) {
			new_num *= num % 10;
		}

		// make num the product of previous num's digit
		num = new_num;

		// keep track of the amount of times this has been done
		count++;
	}

	return count;
} // persistence(int)

int main()
{
	int num;
	while (1) {
		printf("Enter number: ");
		scanf("%d", &num);

		// output
		printf("\nPersistence of %d is %d\n", num, persistence(num));

		// checking if nothing inputting i.e. EOF
		char check = getch();
		if (check == 13) break;
	}
	return 0;
} // main()
