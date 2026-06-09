#include <stdio.h>

enum Message_Type{
	LOGIN,
	DATA
};
struct Message{
	enum Message_Type type;

	union{
		int userID;
		int number;
	}cont;
}; 

int main(){
	struct Message m1, m2;
	m1.type = LOGIN;
	printf("Login Message\n");
    printf("Enter user ID: ");
    scanf("%d", &m1.cont.userID);

	m2.type = DATA;
	printf("Data\n"); 
	printf("Enter number: ");
    scanf("%d", &m2.cont.number);
	
	printf("\nMessage 1\n");
    if(m1.type == LOGIN) {
        printf("Type: Login\n");
        printf("User ID: %d\n", m1.cont.userID);
    }
	else {
        printf("Type: Data\n");
        printf("Number: %d\n", m1.cont.number);
    }

    printf("\nMessage 2\n");
    if(m2.type == LOGIN) {
        printf("Type: Login\n");
        printf("User ID: %d\n", m2.cont.userID);
    } 
	else {
        printf("Type: Data\n");
        printf("Number: %d\n", m2.cont.number);
    }

	return 0;
}
