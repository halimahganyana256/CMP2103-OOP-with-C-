// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.
// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <iostream>
using namespace std;

int main() {
    // Current population
    long long population = 312032486;

    // Number of seconds in one year
    const int secondsPerYear = 365 * 24 * 60 * 60;

    // Calculate the number of births, deaths and immigrants per year
    int birthsPerYear = secondsPerYear / 7;
    int deathsPerYear = secondsPerYear / 13;
    int immigrantsPerYear = secondsPerYear / 45;

    // Calculate the net population increase per year
    int netIncrease = birthsPerYear - deathsPerYear + immigrantsPerYear;

    cout << "Population Projection" << endl;
    cout << "---------------------" << endl;

    cout << "Current population: " << population << endl;
    cout << "Net increase per year: " << netIncrease << endl;

    // Display the population for each of the next five years
    for (int year = 1; year <= 5; year++) {
        population = population + netIncrease;

        cout << "Year " << year << ": " << population << endl;
    }

    return 0;
}

