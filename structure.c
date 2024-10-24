#include<stdio.h>
#include<string.h>

struct student {

char Reg_No[20];
char email[21];
int phone;
int ID;
char name[20];
float marks;

} student1;
int main () {
strcpy (student1.Reg_No,"CT102/G/21749/24");
strcpy(student1.email,"solomonndegwa800@gmail.com");
student1.phone = 0752353064;
student1.ID = 41128874;
strcpy(student1.name,"solomon");
student1.marks = 89.7;
 
 // prompt the user to Enter
 printf("Enter the registration number:");
 scanf("%s", &student1.Reg_No);
 printf("Enter the email:");
 scanf("%s", &student1.email);
 printf("Enter the phone number:");
 scanf("%d", &student1.phone);
 printf("Enter the ID:");
 scanf("%d", &student1.ID);
 printf("Enter the the name:");
 scanf("%s", &student1.name);
 printf("Enter the marks:");
 scanf("%f", &student1.marks);
 
 //  display the output
 printf("registration number:%s\n", student1.Reg_No);
 printf("email:%s\n", student1.email);
 printf("phone number:%d", student1.phone);
 printf("ID:%d", student1.ID);
 printf("name:%s\n", student1.name);
 printf("marks:%f", student1.marks);
 return 0;
 }
