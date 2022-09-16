#include <iostream>
#define SIZE 5

using namespace std;

int append(int array[SIZE]);
int destroy(int array[SIZE]);
int display(int array[SIZE]);

int main()
{
  int choice;
  int array[SIZE];

  do
  {
    cout << "[1] Append\n";
    cout << "[2] Destroy\n";
    cout << "[3] Display\n";
    cout << "[4] Exit\n";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      append(array);
      break;
    case 2:
      destroy(array);
      break;
    case 3:
      display(array);
      break;
    case 4:
      return -1;
      break;
    default:
      cout << "Invalid input. Please try again.";
      break;
    }

  } while (choice < 4);

  return 0;
}

int append(int array[SIZE])
{
  for (int i = 0; i < SIZE; i += 1)
  {
    cin >> array[i];
  }
  cout << "\n";

  return 0;
}

int destroy(int array[SIZE])
{
  for (int i = 0; i < SIZE; i += 1)
  {
    array[i] = 0;

    cout << array[i] << " ";
  }
  cout << "\n\n";

  return 0;
}

int display(int array[SIZE])
{
  for (int i = 0; i < SIZE; i += 1)
  {
    cout << array[i] << " ";
  }
  cout << "\n\n";

  return 0;
}
