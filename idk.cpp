#include <iostream>
#define COLS 2
#define ROWS 2
#define HEIGHT 2

using namespace std;

int main()
{
  int array[ROWS][COLS][HEIGHT];
  int sum = 0;

  for (int i = 0; i < ROWS; i += 1)
  {
    for (int j = 0; j < COLS; j += 1)
    {
      for (int k = 0; k < HEIGHT; k += 1)
      {
        cout << "Enter the element to be stored in the array: ";
        cin >> array[i][j][k];
      }
    }
  }

  // display the elements stored in the array
  for (int i = 0; i < ROWS; i += 1)
  {
    for (int j = 0; j < COLS; j += 1)
    {
      for (int k = 0; k < HEIGHT; k += 1)
      {
        cout << "\nIndex: " << i << " " << j << " " << 1 << " "
             << array[i][j][k];
        sum += array[i][j][k];
      }
    }
  }

  cout << "\n";
  cout << "The Sum of the elements inside the array: " << sum << endl;
}
