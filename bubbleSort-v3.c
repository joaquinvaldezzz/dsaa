#include "stdio.h"

void bubbleSort(int array[], int length);
void input(int array[], int length);
void display(int array[], int length);

int main()
{
  int length;

  printf("Enter the length of the array: ");
  scanf("%d", &length);

  int array[length];

  printf("\n");

  input(array, length);
  bubbleSort(array, length);
  printf("\n");
  display(array, length);

  return 0;
}

void bubbleSort(int array[], int length)
{
  for (int i = 0; i < length; i += 1)
  {
    for (int j = 0; j < (length - 1 - i); j += 1)
    {
      if (array[j] < array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void input(int array[], int length)
{
  // Enter an integer for each index
  for (int i = 0; i < length; i += 1)
  {
    printf("a[%d]: ", i);
    scanf("%d", &array[i]);
  }
}

void display(int array[], int length)
{
  // Display sorted array in descending order
  for (int i = 0; i < length; i += 1)
  {
    printf("a[%d] = %d\n", i, array[i]);
  }
}
