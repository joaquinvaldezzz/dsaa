#include "stdio.h"

void swap(int *a, int *b);
int partition(int a[], int left, int right);
void quickSort(int a[], int left, int right);
void display(int a[], int size);

int main()
{
  int array[] = {10, 17, 12, 18, 5, 95};

  int n = sizeof(array) / sizeof(array[0]);

  // Display the unsorted array
  printf("Unsorted Array \n");
  display(array, n);

  quickSort(array, 0, n - 1);
  printf("\nSorted Array ");
  display(array, n);

  return 0;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int a[], int left, int right)
{
  int pivot = a[right]; // Pivot
  int j;

  int i = (left - 1);

  for (j = left; j <= right - 1; j += 1)
  {
    if (a[j] < pivot)
    {
      i += 1;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[right]);
  return (i + 1);
}

void quickSort(int a[], int left, int right)
{
  if (left < right)
  {
    int p = partition(a, left, right);

    quickSort(a, left, p - 1);
    quickSort(a, p + 1, right);
  }
}

void display(int a[], int size)
{
  int i;

  for (i = 0; i < size; i += 1)
  {
    printf("%d\t", a[i]);
  }
}
