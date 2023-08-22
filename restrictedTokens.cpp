#include <iostream>
#include <string>
#include <vector>

class RestrictedToken {
public:
    RestrictedToken(const std::string& userId, const std::vector<std::string>& permissions)
        : userId(userId), permissions(permissions) {}

    bool hasPermission(const std::string& requiredPermission) const {
        for (const std::string& permission : permissions) {
            if (permission == requiredPermission) {
                return true;
            }
        }
        return false;
    }

private:
    std::string userId;
    std::vector<std::string> permissions;
};

int main() {
    // Create a restricted token with specific permissions
    RestrictedToken userToken("123", {"read_data", "write_data"});

    // Check if the token has a specific permission
    if (userToken.hasPermission("read_data")) {
        std::cout << "User has read permission." << std::endl;
    } else {
        std::cout << "User does not have read permission." << std::endl;
    }

    if (userToken.hasPermission("execute_code")) {
        std::cout << "User has execute permission." << std::endl;
    } else {
        std::cout << "User does not have execute permission." << std::endl;
    }

    return EXIT_SUCCESS;
}

