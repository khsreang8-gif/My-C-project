#include <stdio.h>

/*int main() {
	int num[5] = {5, 3, 8, 1, 9}; //example 1
	
	printf("num[0] = %d\n", num[0]);
	printf("num[1] = %d\n", num[1]);
	printf("num[2] = %d\n", num[2]);
	printf("num[3] = %d\n", num[3]);
	printf("num[4] = %d\n", num[4]);
	
	getchar();
	return 0;
}

int main() {
	int num[5] = {5, 3, 8, 1, 9}; //example 2
	int i;
	
	for (i = 0; i < 5; i++) {
		printf("num[%d] = %d\n", i, num[i]);
	
	}
	
	return 0;
}*/

int main() {
	int num[3];
	int i;
	
	//Input example 3
	for (i = 0; i < 3; i++) {
		printf("Type number %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	//Input
	printf("\nThe numbei you type:\n");
	for (i = 0; i < 3; i++) {
		printf("number %d = %d\n", i+1, num[i]);
	}
	
	return 0;
	
}


