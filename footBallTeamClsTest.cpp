#include <iostream>
#include <string>
#include <iomanip> // Include this for std::flush

class footballSquad {

public:
    footballSquad(const std::string& goalkeeper, const std::string& defender, const std::string& midfielder, const std::string& striker)
        : goalkeeper(goalkeeper), defender(defender), midfielder(midfielder), striker(striker) {}

    // Function to format player information
    std::string formatPlayerInfo(const std::string& playerName, const std::initializer_list<std::string>& attributes) const {
        std::string result = playerName + " - ";
        for (const std::string& attribute : attributes) {
            result += attribute + ", ";
        }
        result.erase(result.length() - 2); // Remove the trailing ", "
        return result;
    }

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
    std::string goalkeeper;
    std::string defender;
    std::string midfielder;
    std::string striker;
};

int main() {
    std::string say = " Football Team Departments ";
    std::string input;

    // Create a footballSquad instance
    footballSquad squad("Goalkeeper", "Defender", "Midfielder", "Striker");

    std::cout << say << std::endl;
    std::cout << "Goal keeper uses:" << squad.getGoalKeeper() << std::endl;
    std::cout << squad.getDefender() << std::endl;
    std::cout << squad.getMidfielder() << std::endl;
    std::cout << squad.getStriker() << std::endl;

    std:: cout << "Enter your Department:" << std::flush;
    std:: cin >> input;
    std:: cout << "You Entered: " << input << std::endl;



    return EXIT_SUCCESS;
}
