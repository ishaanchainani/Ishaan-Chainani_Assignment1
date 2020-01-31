#include <iostream>
using namespace std;

int main(){


int maxRoomCapacity = 0;
int attendance = 0;

cout << "Enter max room capacity: " << endl; //prompt user
cin >> maxRoomCapacity; //user input

cout << "Enter number of people in attendance: " << endl;
cin >> attendance;

if(attendance <= maxRoomCapacity){ //if attendance amount exceeds room capacity, perform action
  int additionalPeople = maxRoomCapacity - attendance;
  cout << "It is legal to hold a meeting. " << additionalPeople << " more people can legally attend." << endl;

}

else{
  int exclude = attendance - maxRoomCapacity;
   cout << "It is illegal to hold a meeting. "  << exclude << " people need to be excluded."<< endl;
}





}
