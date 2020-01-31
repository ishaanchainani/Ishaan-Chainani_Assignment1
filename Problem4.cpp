#include <iostream>
using namespace std;

int main(){

//state variables
  double itemCost = 0.0;
  int numOfYears, i;
  float inflationRate = 0.0;


//user input
  cout << "Enter cost of item: $";
  cin >> itemCost;

  cout << "Enter the number of years in which item will be purchased: " << endl;
  cin >> numOfYears;

  cout << "Enter inflation rate (percentage): " << endl;
  cin >> inflationRate;

  inflationRate = inflationRate/100;

//for loop to go through numOfYears
  for(i=0; i<numOfYears;i++){
    itemCost = itemCost + itemCost*inflationRate; //final item cost added to product of inflationRate

    cout << "The cost of the item in " << numOfYears << " years will be $ " << itemCost << "." << endl;

    return 0;
  }


}
