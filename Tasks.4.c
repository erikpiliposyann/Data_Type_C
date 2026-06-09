#include <stdio.h>

enum Payment_Type {
    HOURLY,
    SALARY
};

struct Employee {
    int id;
    enum Payment_Type type;

    union {
        struct {
            int hours;
            float rate;
        } hourly;

        float salary;
    } payment;
};

int main() {
    struct Employee e1, e2;

    e1.id = 1;
    e1.type = HOURLY;

    printf("Employee 1 (Hourly)\n");
    scanf("%d", &e1.payment.hourly.hours);
    scanf("%f", &e1.payment.hourly.rate);

    e2.id = 2;
    e2.type = SALARY;

    printf("Employee 2 (Salary)\n");
    scanf("%f", &e2.payment.salary);

    printf("Employee 1 ID: %d\n", e1.id);
    if(e1.type == HOURLY) {
        printf("Type: Hourly\n");
        printf("%d %.2f %.2f\n",
               e1.payment.hourly.hours,
               e1.payment.hourly.rate,
               e1.payment.hourly.hours * e1.payment.hourly.rate);
    } else {
        printf("Type: Salary\n");
        printf("%.2f\n", e1.payment.salary);
    }

    printf("Employee 2 ID: %d\n", e2.id);
    if(e2.type == HOURLY) {
        printf("Type: Hourly\n");
        printf("%d %.2f %.2f\n",
               e2.payment.hourly.hours,
               e2.payment.hourly.rate,
               e2.payment.hourly.hours * e2.payment.hourly.rate);
    }
    else {
        printf("Type: Salary\n");
        printf("%.2f\n", e2.payment.salary);
    }

    return 0;
}
