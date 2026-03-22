#include <stdio.h>

//lesson 4.example1


/*int add(int a, int b) {
	return a + b;
}


int main() {
	int result;
	result = add(5, 3);
	printf("5 + 3 = %d\n", result);
	
	result = add(10, 20);
	printf("10 + 20 = %d\n", result);*/
	
	
	//lesson 4.example2
	
int add(int a, int b) {
	return a + b;
}	


int multiply(int a, int b) {
	return a * b;
}


void greet() {
	printf("Hello\n");
}
	

int main() {
	greet();
	printf("Add: %d\n", add(4, 6));
	printf("Multiply: %d\n", multiply(4, 6));
	
return 0;	
	
}
