#include <stdio.h>

union Number{
 	 int int_num;
	 float flout_num;
};

int main(){
    union Number num;
	
    printf("Enter an integer: ");
    scanf("%d", &num.int_num);
    printf("Stored as integer: %d\n", num.int_num);

	printf("\nEnter a float: ");
    scanf("%f", &num.flout_num);
    printf("Stored as float: %.2f\n", num.flout_num);

	return 0;
}
