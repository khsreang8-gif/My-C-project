#include <stdio.h>
int main() {
	
	int age;
	float height;
	char grade;
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter your height: ");
	scanf("%f", &height);
	
	printf("Enter grade: ");
	scanf(" %c", &grade);
	
	printf("\nAge: %d", age);
	printf("\nHeight: %.2f", height);
	printf("\nGrade: %c", grade);
	
	getchar();
	return 0;
}
