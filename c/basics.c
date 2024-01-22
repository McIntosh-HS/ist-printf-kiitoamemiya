#include <stdio.h>

int main()
{
	printf ( " This is the baics of c "  );

	int num;     // type name;
	printf("Enter a number: ");	     // prompt user for a number
	
	scanf("%i", &num);	// store user input in num
	
	printf("You entered %i\n", num);
	return 0;	
}
