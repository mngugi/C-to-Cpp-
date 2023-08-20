#include <iostream> // in output standard header
#include <string> // header files needed for this project are located in string


class Cars { // the class car is defined
public :
    Cars(const std::string& make, const std::string& model) : make(make), model(model) {}// two constructors make and model are initialized

    std::string getMake() const {
        return make;

    }

    std::string getModel() const {
        return model;

    }
private: // make and model are private member variables
    std::string make;
    std::string model;


} ;


// main function
// two instances of the car class are Japan and German
// showing make and model types

int main() {

Cars Japan("Toyota", "Hilux");
Cars Germany("VW Golf", "GTI");

// Accessing instance attributes

std::cout << Japan.getMake() << " " << Japan.getModel() << std::endl;
std::cout << Germany.getMake() << " "<< Germany.getModel() << std::endl;

return EXIT_SUCCESS;


}


