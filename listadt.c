#include "stdio.h"
#define MAX 10

void create();
void insert();
void deletion();
void search();
void display();

int a, b[20], n, p, e, f, i, position, value;

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
    case 2:
      deletion();
      break;
    case 3:
      search();
      break;
    case 4:
      insert();
      break;
    case 5:
      display();
      break;
    case 6:
      return -1;
      break;
    default:
      printf("\nProgram terminated.\n");
      return -1;
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
    printf("Enter the element: ");
    scanf("%d", &b[i]);
  }

  printf("\n");
}

void deletion()
{
  printf("\nEnter the position you want to delete: ");
  scanf("%d", &position);

  if (position >= n)
  {
    printf("\nInvalid location");
  }
  else
  {
    for (i = position; i < n; i += 1)
    {
      b[i - 1] = b[i];
    }

    n -= 1;
  }

  printf("\nThe elements after deletion:\n");
  for (i = 0; i < n; i += 1)
  {
    printf("%d ", b[i]);
  }
  printf("\n\n");
}

void search()
{
  printf("\nEnter the position you want to search: ");
  scanf("%d", &position);

  if (position >= n)
  {
    printf("\nInvalid location\n\n");
  }
  else
  {
    for (i = position; i < n; i += 1)
    {
      if (position == i)
      {
        printf("Element %d is %d.", i, b[i]);
      }
    }
    printf("\n\n");
  }
}

void insert()
{
  printf("\nEnter the position you want to insert: ");
  scanf("%d", &position);

  if (position >= n)
  {
    printf("\nInvalid location");
  }
  else
  {
    printf("Enter the element you want to insert: ");
    scanf("%d", &value);

    n += 1;

    for (i = n - 1; i >= position; i -= 1)
    {
      b[i] = b[i - 1];
    }

    b[position - 1] = value;
  }

  printf("\nThe elements after insertion:\n");
  for (i = 0; i < n; i += 1)
  {
    printf("%d ", b[i]);
  }
  printf("\n\n");
}

void display()
{
  printf("\nThe elements of the list are:\n");
  for (i = 0; i < n; i += 1)
  {
    printf("%d ", b[i]);
  }
  printf("\n\n");
}
