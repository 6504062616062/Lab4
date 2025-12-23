#include <stdio.h>
int main (void) {
	// Local Declarations
	long num;
	int digit;
	// Statements
	printf("Enter a number and I'll print it backward: ");
	scanf ("%d", &num);
	while(num!=0){
		while (num > 0) {
		digit = num % 10;
		printf("%d", digit);
		num = num / 10;
	} 
	scanf("%d",&num);
}

	printf("\nHave a good day.\n");
	return 0;
} // main
