/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Weather Stations
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/10/2026 14:55 P.M.
*/
#include <iostream>
#include <string>
using namespace std;

struct Location {
    string name;
    float latitude;
    float longitude;
};

struct Temperature {
    float dailyTemp;
};

struct WeatherStation {
    Location loc;
    Temperature history[10];
};

int main() {
    WeatherStation station[25];

    station[0].loc.name = "Los Angeles Station";
    station[0].loc.latitude = 34.05;
    station[0].loc.longitude = -118.24;

    float sampleTemps[10] = {72.5, 70.1, 68.4, 75.0, 74.2, 73.8, 71.5, 69.9, 70.5, 72.1};
    for (int i = 0; i < 10; i++) {
        station[0].history[i].dailyTemp = sampleTemps[i];
    }

    cout << "Station Name: " << station[0].loc.name << endl;
    cout << "Coordinates: " << station[0].loc.latitude << ", " << station[0].loc.longitude << endl;
    cout << "\n";
    cout << "10-Day Temperature History:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Day " << (i+1) << ": " << station[0].history[i].dailyTemp << " F" << endl;
    }
    return 0;
}
