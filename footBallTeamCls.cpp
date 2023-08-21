#include <iostream>
#include <string>

class footBallSquade {
public:
    footBallSquade(const std::string& goalkeeper, const std::string& defender, const std::string& midfielder, const std::string& striker)
        : goalkeeper(goalkeeper), defender(defender), midfielder(midfielder), striker(striker) {}

std::string getGoalKeeper() const {
    return goalkeeper;
}

std::string getDefender() const {
    return defender;
}

std::string getMidfielder() const {
    return midfielder;
}

std::string getStriker() const {
    return striker ;
}
private:
    std::string goalkeeper;
    std::string defender;
    std::string midfielder;
    std::string striker;
};

int main() {
    footBallSquade keeperNumber1("Uses", "Hands", "Feet", "Head");
    footBallSquade defendNumbers2345("Uses", "Feet", "Head", "Body");
    footBallSquade midNumbers67811("Uses", "Feet", "Head", "Body");
    footBallSquade strikeNumbers910("Uses", "Feet", "Head", "Body");

    return EXIT_SUCCESS;
}

