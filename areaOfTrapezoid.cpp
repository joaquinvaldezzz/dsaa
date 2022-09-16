#include <iostream>
using namespace std;

int main()
{
  float baseOne, baseTwo, height;

  cout << "Enter first base of trapezoid: ";
  cin >> baseOne;

  cout << "Enter second base trapezoid: ";
  cin >> baseTwo;

  cout << "Enter height of trapezoid: ";
  cin >> height;

  float area = (baseOne + baseTwo) * height / 2;

  cout << "Area of trapezoid is " << area;
}
