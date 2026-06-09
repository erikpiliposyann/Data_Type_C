#include <stdio.h>

typedef struct Student {
    int  Id;
    char type_of_study[20];
    float score;
} Student;

int main() {
    Student students[3] = {
        {1, "University", 91},
        {2, "School",     88},
        {3, "University", 74}
    };

        printf("ID: %d | Type of study: %s | Score: %.2f\n",
           students[0].Id, students[0].type_of_study, students[0].score);

         printf("ID: %d | Type of study: %s | Score: %.2f\n",
           students[1].Id, students[1].type_of_study, students[1].score);

         printf("ID: %d | Type of study: %s | Score: %.2f\n",
           students[2].Id, students[2].type_of_study, students[2].score);

    return 0;
}
