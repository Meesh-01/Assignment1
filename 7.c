#include <stdio.h>

struct student {
  char name[20];
  int grade;
};

int main() {
 
    struct student s[10];

    for(int i=0 ; i<10;i++){

         printf("Enter the name of student %d: ", i + 1);
         scanf("%s", s[i].name);

         printf("Enter his grade : ");
         scanf("%d", &s[i].grade);
    }


    for(int j=0 ; j<10;j++){

       printf("\nname | Grade\n");

        printf("%s | %d\n", s[j].name, s[j].grade);
    }


}