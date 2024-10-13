#include <iostream>
using namespace std;

int main() {
    // Constants for ingredients based on 48 cookies
    const double SUGAR_PER_48_COOKIES = 1.5;   // cups of sugar
    const double BUTTER_PER_48_COOKIES = 1.0;  // cups of butter
    const double FLOUR_PER_48_COOKIES = 2.75;  // cups of flour
    const int BASE_COOKIES = 48;               // base recipe makes 48 cookies

    // Variable to store the number of cookies the user wants to make
    int desiredCookies;

    // Ask the user how many cookies they want to make
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    // Calculate the required ingredients
    double sugarNeeded = (SUGAR_PER_48_COOKIES / BASE_COOKIES) * desiredCookies;
    double butterNeeded = (BUTTER_PER_48_COOKIES / BASE_COOKIES) * desiredCookies;
    double flourNeeded = (FLOUR_PER_48_COOKIES / BASE_COOKIES) * desiredCookies;

    // Display the results
    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
    cout << sugarNeeded << " cups of sugar" << endl;
    cout << butterNeeded << " cups of butter" << endl;
    cout << flourNeeded << " cups of flour" << endl;

    return 0;
}
