#include <iostream> // in output standard header
#include <string> // header files needed for this project are located in string


class Cars { // the class car is defined
public :
    Cars(const std::string& make, const std::string& model, const std::string& engine)
    : make(make), model(model), engine(engine) {}// two constructors make and model are initialized

    std::string getMake() const {
        return make;

    }

    std::string getModel() const {
        return model;

    }

    std::string getEngine() {
        return engine;
    }

private: // make and model are private member variables
    std::string make;
    std::string model;
    std::string engine;

} ;

// main function
// two instances of the car class are Japan and German
// showing make and model types

int main() {

Cars Japan("Toyota", "Hilux", "2400 cc");
Cars Germany("VW Golf", "GTI","2000 cc" );
Cars British("Rang Rover", "vogue","3200 cc");

// Accessing instance attributes and printing out the output

std::cout << Japan.getMake() << " " << Japan.getModel() << " " << Japan.getEngine() << std::endl;
std::cout << Germany.getMake() << " " << Germany.getModel() << " " << Germany.getEngine() << std::endl;
std::cout << British.getMake() << " " << British.getModel() << " " << British.getEngine() << std::endl;

return EXIT_SUCCESS;


}


