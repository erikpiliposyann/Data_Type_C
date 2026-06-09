#include <stdio.h>

enum Car_Type {
    CAR,
    BIKE
};

struct Vehicle {
    int id;
    enum Car_Type type;

    union {
        int doors;        
        int engineCapacity;
    } details;
};

int main() {
    struct Vehicle v;
    int type_vehicle;

    printf("If you want car enter 1:\nIf you want bike enter 2: ");
    scanf("%d", &type_vehicle);

    if(type_vehicle == 1){
        v.type = CAR;
        printf("Input your Car ID: ");
        scanf("%d", &v.id);

        printf("Enter number of doors: ");
        scanf("%d", &v.details.doors);
    }
    else if(type_vehicle == 2){
        v.type = BIKE;
        printf("Input your Bike ID: ");
        scanf("%d", &v.id);   

        printf("Enter engine capacity: ");
        scanf("%d", &v.details.engineCapacity);
    }
    else {
        printf("Invalid input!\n");
        return 0;
    }

    printf("\nVehicle Information\n");
    printf("Vehicle ID: %d\n", v.id);
    if(v.type == CAR) {
        printf("Type: Car\n");
        printf("Doors: %d\n", v.details.doors);
    }
    else {
        printf("Type: Bike\n");
        printf("Engine Capacity: %d\n", v.details.engineCapacity);
    }

    return 0;
}
