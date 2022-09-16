#include <iostream>
using namespace std;

int main()
{
  float area, side;

  cout << "Enter the length of the side of the cube: ";
  cin >> side;

  area = 6 * side * side;

  cout << "The Area of the cube with side " << side << " is " << area
       << " sq units.";
}
