#include <stdio.h>

int main() {
/*int i=1;

while (i <= 5) {
	printf("Number: %d\n", i);
	i++;
	}*/
	
	int num = 0;
	
	while (num != 999) {
		printf("type Number (999 stop:) ");
		scanf("%d", &num);
		printf("You type: %d\n", num);
	}
	
	printf("end!\n");
	
	return 0;
}
