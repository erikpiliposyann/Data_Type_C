#include <stdio.h>


enum GeometricShapes{
	CIRCLE,
	RECTANGLE
};

struct Shape{
	enum GeometricShapes shape;
	struct{
		float radius;
	}circle;
	struct{
		float width;
		float height;
	}rectangle;
};

int main(){
    struct Shape s1, s2;

    s1.shape = CIRCLE;
    printf("Enter radius of the circle: ");
    scanf("%f", &s1.circle.radius);

    s2.shape = RECTANGLE;
    printf("Enter width of the rectangle: ");
    scanf("%f", &s2.rectangle.width);
    printf("Enter height of the rectangle: ");
    scanf("%f", &s2.rectangle.height);

    printf("\nCircle Information\n");
    printf("Radius: %.2f\n", s1.circle.radius);

    printf("\nRectangle Information\n");
    printf("Width: %.2f\n", s2.rectangle.width);
    printf("Height: %.2f\n", s2.rectangle.height);

    return 0;

}
