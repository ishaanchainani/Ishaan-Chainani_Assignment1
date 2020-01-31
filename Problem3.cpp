#include <iostream>
using namespace std;

int main(){

//variable declaration
  int numHoursPerWeek = 0;
  float grossPay = 0.0;
  float socialSecurity = 0.0;
  float federalIncome = 0.0;
  float stateIncome = 0.0;
  float medicalInsurance = 0.0;
  float takeHomePay = 0.0;

//user input
  cout << "Enter hours worked in week: " << endl; //user input
  cin >> numHoursPerWeek;

//calculations based on gross pay
  grossPay = numHoursPerWeek * 16;
  cout << "Your gross pay is: $" << grossPay << endl;

  socialSecurity = 0.06 * grossPay;
  cout << "Your Social Security tax is: $" << socialSecurity << endl;

  federalIncome = 0.14 * grossPay;
  cout << "Your Federal Income tax is: $" << federalIncome << endl;

  stateIncome = 0.05 * grossPay;
  cout << "Your State Income tax is: $" << stateIncome << endl;

  medicalInsurance = 0.015 * grossPay;
  cout << "Your Medical Insurance is: $" << medicalInsurance << endl;

  takeHomePay = grossPay - (socialSecurity + federalIncome + stateIncome + medicalInsurance);
  cout << "Your net take-home pay is: $" << takeHomePay << endl;




}
