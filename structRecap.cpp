#include <iostream>
#include <string>

using namespace std;
/**a struct is a user-defined data type that groups
together variables (members) of different types under a single name.
It's a way to create a composite data type that can hold related pieces of information.
Remember that struct members are public by default
**/
struct motoBike {

string Ducati;
int cc;
float speed;
};

int main() {
// create an instance of motoBike struct
    motoBike speedBike;
// create and assign values to variables
    speedBike.Ducati = "Sport Bike";
    speedBike.cc = 650 ;
    speedBike.speed = 400.64;

// Access and print the member variables
cout << "Type:  " << speedBike.Ducati << endl;
cout << "CC: " << speedBike.cc << endl ;
cout << "Speed: " << speedBike.speed << endl;




}

