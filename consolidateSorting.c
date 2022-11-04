#include "stdio.h"
#include "stdbool.h"

void bubbleSort(int a[], int length);
void mergeSort(int a[], int l, int r);
void insertionSort(int a[], int length);
void selectionSort(int a[], int length);
void quickSort(int a[], int left, int right);
void heapify(int arr[], int N, int i);
void heapSort(int a[], int length);
void input();
void display(int a[], int length);

int i, j, n;
int a[100];
int b[100];

int main()
{
  int choice;

  do
  {
    printf("\n******* SORTING ALGORITHM ********");
    printf("\n[1] Bubble Sort");
    printf("\n[2] Merge Sort");
    printf("\n[3] Insert Sort");
    printf("\n[4] Selection Sort");
    printf("\n[5] Quick Sort");
    printf("\n[6] Heap Sort");
    printf("\n[7] Exit");
    printf("\nPlease choose your sorting algorithm: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Bubble Sort
      input();
      display(a, n);
      printf("\n");
      bubbleSort(a, n);
      display(a, n);
      break;
    case 2: // Merge Sort
      input();
      display(a, n);
      printf("\n");
      mergeSort(a, 0, n - 1);
      display(a, n);
      break;
    case 3: // Insertion Sort
      input();
      display(a, n);
      printf("\n");
      insertionSort(a, n);
      display(a, n);
      break;
    case 4: // Selection
      input();
      display(a, n);
      printf("\n");
      selectionSort(a, n);
      display(a, n);
      break;
    case 5: // Quick Sort
      input();
      display(a, n);
      printf("\n");
      quickSort(a, 0, n - 1);
      display(a, n);
      break;
    case 6: // Heap Sort
      input();
      display(a, n);
      printf("\n");
      heapSort(a, n);
      display(a, n);
      break;
    case 7: // Close the program
      return -1;
      break;
    default:
      printf("Program is exiting.");
    }
  } while (choice <= 6);

  return 0;
}

void bubbleSort(int a[], int length)
{
  bool swapped = false;

  do
  {
    swapped = false;

    for (i = 0; i < length; i += 1)
    {

      for (j = 0; j < (length - 1 - i); j += 1)
      {

        if (a[j] > a[j + 1])
        {

          int temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;

          swapped = true;
        }
      }
    }
  } while (swapped);
}

void merge(int a[], int l, int m, int r)
{
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (i = 0; i < n1; i += 1)
    L[i] = a[l + i];
  for (j = 0; j < n2; j += 1)
    R[j] = a[m + 1 + j];

  i = 0;
  j = 0;
  k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      a[k] = L[i];
      i += 1;
    }
    else
    {
      a[k] = R[j];
      j += 1;
    }
    k += 1;
  }

  while (i < n1)
  {
    a[k] = L[i];
    i += 1;
    k += 1;
  }

  while (j < n2)
  {
    a[k] = R[j];
    j += 1;
    k += 1;
  }
}

void mergeSort(int a[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);

    merge(a, l, m, r);
  }
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

void insertionSort(int a[], int length)
{
  int key;
  for (i = 1; i < length; i += 1)
  {
    key = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
}

void selectionSort(int a[], int length)
{
  for (int step = 0; step < length - 1; step += 1)
  {
    int min_idx = step;
    for (int i = step + 1; i < length; i += 1)
    {
      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (a[i] < a[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&a[min_idx], &a[step]);
  }
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

void heapify(int arr[], int N, int i)
{
  // Find largest among root, left child and right child

  // Initialize largest as root
  int largest = i;

  // left = 2*i + 1
  int left = 2 * i + 1;

  // right = 2*i + 2
  int right = 2 * i + 2;

  // If left child is larger than root
  if (left < N && arr[left] > arr[largest])

    largest = left;

  // If right child is larger than largest
  // so far
  if (right < N && arr[right] > arr[largest])

    largest = right;

  // Swap and continue heapifying if root is not largest
  // If largest is not root
  if (largest != i)
  {

    swap(&arr[i], &arr[largest]);

    // Recursively heapify the affected
    // sub-tree
    heapify(arr, N, largest);
  }
}

void heapSort(int arr[], int N)
{
  int i;
  // Build max heap
  for (i = N / 2 - 1; i >= 0; i--)

    heapify(arr, N, i);

  // Heap sort
  for (i = N - 1; i >= 0; i--)
  {

    swap(&arr[0], &arr[i]);

    // Heapify root element to get highest element at
    // root again
    heapify(arr, i, 0);
  }
}

void input()
{
  printf("\nEnter the size of your array: ");
  scanf("%d", &n);

  printf("\nEnter your desired positive integers: ");
  for (i = 0; i < n; i += 1)
  {
    scanf("%d", &a[i]);
  }
}

void display(int a[], int length)
{
  for (i = 0; i < n; i += 1)
  {
    // Display the array
    printf("a[%d] = %d\n", i, a[i]);
  }
}
