#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // seed for random number generator
    int daysUntilExpiration = rand() % 12; // generate a random number between 0 and 11

    switch(daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired.\n";
            break;
        case 1:
            std::cout << "Your subscription expires within a day!\n";
            std::cout << "Renew now and save 20%!\n";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Your subscription expires in " << daysUntilExpiration << " days.\n";
            std::cout << "Renew now and save 10%!\n";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            std::cout << "Your subscription will expire soon. Renew now!\n";
            break;
        default:
            std::cout << "You have an active subscription.\n";
            break;
    }

    return 0;
}
