#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const float GOLDEN_RATIO_PHI = 1.6180;
  int edgeLengthPentagon;
  float area;

  cout << "Enter the edge length of the pentagon: ";
  cin >> edgeLengthPentagon;

  area = sqrt(5 * (5 - 2 * sqrt(5))) * pow(edgeLengthPentagon, 2) / 2;

  cout << "Area of star is " << area;

  return 0;
}
