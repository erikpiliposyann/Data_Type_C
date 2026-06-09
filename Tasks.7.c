#include <stdio.h>

union Container{
	int number;
	char character;
};

int main(){
	union Container c;

	printf("Enter a character: ");
    scanf(" %c", &c.character);
    printf("Stored character: %c\n", c.character);

	printf("\nEnter an integer: ");
    scanf("%d", &c.number);
    printf("Stored integer: %d\n", c.number);

	return 0;
}
