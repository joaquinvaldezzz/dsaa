#include <iostream>
using namespace std;

int main()
{
  int side, area;

  cout << "Enter the side of square: ";
  cin >> side;

  area = side * side;

  cout << "Area of square of side " << side << " is: " << area;

  return 0;
}
