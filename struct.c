/*#include <stdio.h>

struct Student {
	char name[50];
	int age ;
	float gpa;
	
};
 
 int main() {
 	struct Student s1;
 	
 	s1.age = 20;
 	s1.gpa = 3.5;
 	
 	printf("Name: %s\n", s1.name);
 	printf("Age: %d\n", s1.gpa);
 	printf("GPA: %f\n", s1.gpa);
 	
 	return 0;
 }
 
 #include <stdio.h>
 
 struct Student {
 	char name[50];
 	int age;
 	
 };
 
 int main() {
 	struct Student s[3];
 	int i;
 	
 	//Input
 	for (i = 0; i < 3; i++) {
 		printf("Type name: ");
 		scanf("%s", s[i].name);
 		printf("Type age: ");
 		scanf("%d", &s[i].age);
	 }
	 
	 //Output
	 printf("\nStuden List:\n");
	 for (i = 0; i < 3; i++) {
	 	printf("%d. %s - Age %d\n",
		 i+1, s[i].name, s[i].age);
	 }
	 
	 return 0;
	 
 }*/
 
 #include <stdio.h>
 
 struct Rectangle {
 	float width;
 	float height;
 	
 };
 
 float getArea(struct Rectangle r) {
 	return r.width * r.height;
 }

 int main() {
 	struct Rectangle r1;
 	r1.width = 5.0;
 	r1.height = 3.0;
 	
 	printf("Width: %.1f\n", r1.width);
 	printf("Height: %.1f\n", r1.height);
 	printf("Getarea: %1.f\n", getArea(r1));
 	
 	return 0;
 	
 	
 }
