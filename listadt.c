#include "stdio.h"
#define MAX 10

void create();
void insert();
void deletion();
void search();
void display();

int a, b[20], n, p, e, f, i, pos;

int main()
{
  int choice;

  do
  {
    printf("Main menu\n");
    printf("1. Create\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Insert\n");
    printf("5. Display\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      create();
      break;
    case 6:
      return -1;
      break;
    default:
      printf("\nProgram terminated.");
      break;
    }
  } while (choice <= 6);

  return 0;
}

void create()
{
  printf("\nEnter the number of nodes: ");
  scanf("%d", &n);

  for (i = 0; i < n; i += 1)
  {
    printf("Enter the element: ", i + 1);
    scanf("%d", &b[i]);
  }
}
