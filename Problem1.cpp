#include <iostream>
using namespace std;

int main(){
  float weightOunces = 0.0; //stating type of variable
  float metricTons = 0.0;


  cout << "Enter weight in ounces: " << endl; // prompt user to enter weight
  cin >> weightOunces; //user input

  metricTons = weightOunces/35273.92; //conversion to metric tons

  cout << "Weight in tons: " << metricTons << endl;

  float numOfBoxes = 35273.92/weightOunces; //convert tons to cereal boxes

  cout << "Number of boxes of cereal: " << numOfBoxes << endl; //output result




}
