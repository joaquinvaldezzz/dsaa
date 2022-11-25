#include "stdio.h"
#define MAX_SIZE 100

void stacks();
void queue();

int main()
{
  int choice;

  do
  {
    printf("***** MAIN MENU *****");
    printf("\n[1] Stacks Operations");
    printf("\n[2] Queues Operations");
    printf("\n[3] Exit");
    printf("\nPlease enter your choice between 1 to 3: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Stacks Operations
      stacks();
      break;
    case 2: // Queues Operationss
      queue();
      break;
    case 3: // Exit
      return -1;
      break;
    default:
      printf("Program is exiting. Please choose between 1 to 3 only.");
    }

  } while (choice <= 3);

  return 0;
}

void stacks()
{
  int item, choice, i;
  int arr_stack[MAX_SIZE];
  int top = 0;
  int exit = 1;

  printf("\nSimple Stack Example - Array\n");

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
        printf("\n## Position: %d, Pushed value: %d\n", top, item);
        arr_stack[top++] = item;
      }
      break;
    case 2:
      if (top == 0)
        printf("\n## Stack is empty!\n");
      else
      {
        --top;
        printf("## Position: %d, Popped value: %d\n", top, arr_stack[top]);
      }
      break;
    case 3:
      printf("\n## Stack size: %d\n", top);

      for (i = top - 1; i >= 0; i--)
      {
        printf("\n## Position: %d, Value: %d", i, arr_stack[i]);
      }
      break;
    default:
      exit = 0;
      printf("\n");
      break;
    }
  } while (exit);
}

void queue()
{

  int item, choice, i;
  int arr_queue[MAX_SIZE];
  int rear = 0;
  int front = 0;
  int exit = 1;

  printf("\nSimple Queue Example - Array");

  do
  {
    printf("\n\nQueue Main Menu");

    printf("\n1. Insert \n2. Remove \n3. Display \nOthers to exit");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      if (rear == MAX_SIZE)
        printf("\n## Queue reached max!");
      else
      {
        printf("\nEnter the value to be inserted: ");
        scanf("%d", &item);
        printf("\n## Position: %d, Insert value: %d ", rear + 1, item);
        arr_queue[rear++] = item;
      }
      break;
    case 2:
      if (front == rear)
        printf("\n## Queue is empty!");
      else
      {
        printf("\n## Position: %d, Remove value: %d ",
               front, arr_queue[front]);
        front++;
      }
      break;
    case 3:
      printf("\n## Queue size: %d ", rear);
      for (i = front; i < rear; i++)
        printf("\n## Position: %d, Value: %d ", i, arr_queue[i]);
      break;
    default:
      exit = 0;
      printf("\n");
      break;
    }
  } while (exit);
}
