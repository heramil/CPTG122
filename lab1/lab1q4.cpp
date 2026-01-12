/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Parking Lot
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/10/2026 15:21 P.M.
*/
#include <iostream>
#include <string>
using namespace std;

struct ParkingSpace {
    int spaceNumber;
    string licensePlate;
};

struct ParkingLot {
    ParkingSpace space[30];
};

int main() {
    ParkingLot lot;

    for (int i = 0; i < 30; i++) {
        lot.space[i].spaceNumber = i + 1;
        lot.space[i].licensePlate = "";
    }

    lot.space[2] = {3, "CA12345"};
    lot.space[7] = {8, "TX88888"};
    lot.space[14] = {15, "NY54321"};

    cout << "Available Parking Space Numbers:" << endl;

    for (int i = 0; i < 30; i++) {
        if (lot.space[i].licensePlate == "") {
            cout << lot.space[i].spaceNumber << " is available" << endl;
        }
    }
    cout << "\n";
    return 0;
}
