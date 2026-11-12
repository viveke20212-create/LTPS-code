#include <stdio.h>

struct Book {
  char title[30];
  char author[20];
  float price;
  int pages;
};

int main() {
  struct Book books[3];
  for (int i = 0; i < 3; i++) {
    scanf("%s", books[i].title);
    scanf("%s", books[i].author);
    scanf("%f", &books[i].price);
    scanf("%d", &books[i].pages);
  }
  for (int i = 0; i < 3; i++) {
    printf("Book %d \n", i + 1);
    printf("Book title: %s \n", books[i].title);
    printf("Author of the book: %s \n", books[i].author);
    printf("Price: %f \n", books[i].price);
    printf("Number of pages: %d \n", books[i].pages);
  }
}