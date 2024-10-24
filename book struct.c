#include<stdio.h>
#include<string.h>
struct Book {
char tittle[30];
char author[30];
int publication_year;
char ISBN[13];
float price;

} book1; 
int main () {

strcpy(book1.tittle,"introduction to c programming");
strcpy(book1.author,"John smith");
book1.publication_year = 2022;
strcpy(book1.ISBN,"9780131103627");
book1.price = 49.99;
// prompt the user to enter
printf("Enter the tittle:");
scanf("%s", &book1.tittle);
printf("Enter the aothor's name:");
scanf("%s", &book1.author);
printf("Enter the publication_year:");
scanf("%d", &book1.publication_year);
printf("Enter ISBN:");
scanf("%s", &book1.ISBN);
printf("Enter the price:");
scanf("%f", &book1.price);

// display the output
printf("tittle:%s\n", book1.tittle);
printf("author:%s\n", book1.author);
printf("publication_year:%d\n", book1.publication_year);
printf("ISBN:%s\n", book1.ISBN);
printf("price:%f\n", book1.price);

return 0;
}