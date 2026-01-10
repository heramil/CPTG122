/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Flight Information
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/09/2026 15:03 P.M.
*/

#include <iostream>
#include <string>
using namespace std;

struct Flight {
    string flightNumber;
    string departureCity;
    string arrivalCity;
    int flightDuration;
};

int main() {
    Flight flight = {"AA128", "Los Angeles", "New York", 300};

    cout << "Flight #" << flight.flightNumber << endl;
    cout << "Departure: " << flight.departureCity << endl;
    cout << "Arrival: " << flight.arrivalCity << endl;
    cout << "Duration: " << flight.flightDuration << " mins" << endl;
    return 0;
};
