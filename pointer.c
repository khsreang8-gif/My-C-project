/*#include <stdio.h>

int main() {
	int a = 5; //exanole 1
	int *p = &a;
	
	printf("Vaue: a = %d\n", a);
	printf("Address a = %p\n", &a);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	
	return 0;
}
	
	#include <stdio.h>
	

int main() {
	int a = 5;  //exanole 2
	int *p = &a;
	
	printf("Before changing: a = %d\n", a);
	
	*p = 100;
	
	printf("After changing: a = %d\n", a);
	
	
	return 0;
	
}*/


#include <stdio.h>

void addTen(int *p) {
	*p = *p + 10;
}

int main() {
	int a = 5; //exanole 3
	
	printf("Before: a = %d\n", a);
	addTen(&a);
	printf("After: a = %d\n", a);
	
	return 0;
}


