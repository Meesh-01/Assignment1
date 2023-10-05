#include <stdio.h>
int main(){

	char Name [100];
	int age;
	char add [100];

	printf("Enter your full name: ");
	scanf("%[\n]s", Name);


	printf("\nEnter your age: ");
	scanf("%d", &age);

	getchar();

	printf("\nEnter your address: ");
	scanf("%s", add);
	

	printf("Your name is: %s\n",Name);
	printf("Your age is: %d\n",age);
    printf("Your address is: %s\n",add);
        
	


}
