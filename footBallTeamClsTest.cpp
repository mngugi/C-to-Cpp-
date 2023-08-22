#include <iostream>
#include <string>

class footBallSquade {
public:
    footBallSquade(const std::string& goalkeeper, const std::string& defender, const std::string& midfielder, const std::string& striker)
        : goalkeeper(goalkeeper), defender(defender), midfielder(midfielder), striker(striker) {}
/*formatPlayerInfo function that takes a player's name and a list of attributes.
This function formats the output by concatenating the attributes with commas.
It also removes the trailing comma and space at the end.*/
    std::string getGoalKeeper() const {
        return formatPlayerInfo(goalkeeper, {"Hands", "Feet", "Head", "Body"});
    }

    std::string getDefender() const {
        return formatPlayerInfo(defender, {"Uses", "Feet", "Head", "Body"});
    }

    std::string getMidfielder() const {
        return formatPlayerInfo(midfielder, {"Uses", "Feet", "Head", "Body"});
    }

    std::string getStriker() const {
        return formatPlayerInfo(striker, {"Uses", "Feet", "Head", "Body"});
    }

private:
    std::string formatPlayerInfo(const std::string& playerName, const std::initializer_list<std::string>& attributes) const {
        std::string result = playerName + " - ";
        for (const std::string& attribute : attributes) {
            result += attribute + ", ";
        }
        result.erase(result.length() - 2); // Remove the trailing ", "
        return result;
    }

    std::string goalkeeper;
    std::string defender;
    std::string midfielder;
    std::string striker;
};

int main() {
    footBallSquade keeperNumber1("Goalkeeper", "Defender", "Midfielder", "Striker");

    std::cout << keeperNumber1.getGoalKeeper() << std::endl;
    std::cout << keeperNumber1.getDefender() << std::endl;
    std::cout << keeperNumber1.getMidfielder() << std::endl;
    std::cout << keeperNumber1.getStriker() << std::endl;

    return EXIT_SUCCESS;
}
