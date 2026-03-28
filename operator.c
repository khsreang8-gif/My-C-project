/*#include <stdio.h>

int main() {
	int a = 10, b = 3;
	
	printf("a = b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a % b = %d\n", a % b);
	
	return 0;
}

#include <stdio.h>

int main() {
	int a = 10;
	
	a += 5; // a = a + 5 = 15
	printf("a += 5 = %d\n", a);
	
	a -= 3; // a = a - 3 = 12
	printf("a -= 3 = %d\n", a);
	
	a *= 2; // a = a * 2 = 24
	printf("a *= 2 = %d\n", a);
	
	a /= 4; // a / 4 = 6
	printf("a /= 4 = %d\n", a);
	
	a %= 4; // a = a / 4 = 2
	printf("%d\n", a);
	
	return 0;
}*/

#include <stdio.h>

int main() {
	int a = 5, b = 3;
	
	printf("a = b : %d\n", a = b); // false
	printf("a != b : %d\n", a != b); // true
	printf("a > b : %d\n", a > b); // true
	printf("a < b : %d\n", a < b); // false
	printf("a >= b : %d\n", a >= b); // true
	printf("a <= b : %d\n", a <= b); // fulse
	
	return 0;
	
}
