
#include <iostream>

class MyClass {
private:
    int value;

public:
    void setValue(int val) {
        this->value = val; // "this" refers to the current object
    }

    int getValue() {
        return this->value; // Accessing the value of the current object
    }
};

int main() {
    MyClass obj;
    obj.setValue(42);

    std::cout << "Value: " << obj.getValue() << std::endl;

    return 0;
}
