#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 5

int main()
{
  int item, choice, i;
  int arr_stack[MAX_SIZE];
  int top = 0;
  int exit = 1;

  printf("Simple Stack Example - Array\n");

  do
  {
    printf("\nStack Main Menu\n");
    printf("1. Push\n2. Pop\n3. Display\n- Others to exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      if (top == MAX_SIZE)
        printf("\n## Stack is full!\n");
      else
      {
        printf("\nEnter the value to be pushed: ");
        scanf("%d", &item);
        printf("\n## Position: %d, Pushed Value: %d\n", top, item);
        arr_stack[top++] = item;
      }
      break;
    case 2:
      if (top == 0)
        printf("\n## Stack is empty!\n");
      else
      {
        --top;
        printf("## Position: %d, Popped Value: %d\n", top, arr_stack[top]);
      }
      break;
    case 3:
      printf("\n## Stack Size: %d\n", top);

      for (i = top - 1; i >= 0; i--)
      {
        printf("\n## Position: %d, Value: %d", i, arr_stack[i]);
      }
      break;
    default:
      exit = 0;
      break;
    }
  } while (exit);

  return 0;
}
