/*
PROFESSOR: Dr. Fuhao Li
PROGRAM: Traffic Lights
AUTHOR: Prakash Heramil
ID: 944801
LAST MODIFICATION: 01/10/2026 15:01 P.M.
*/
#include <iostream>
#include <string>
using namespace std;

enum LightState {
    RED,
    YELLOW,
    GREEN
};

struct TrafficLight {
    string streetName;
    LightState state;
};

string getInstruction(LightState state) {
    switch (state) {
        case RED:
            return "STOP";
        case YELLOW:
            return "CAUTION - Prepare to stop";
        case GREEN:
            return "GO";
        default:
            return "Unknown";
    }
}

string getLightColor(LightState state) {
    switch (state) {
        case RED: return "RED";
        case YELLOW: return "YELLOW";
        case GREEN: return "GREEN";
        default: return "Unknown";
    }
}

int main() {
    TrafficLight lights[3];

    lights[0] = {"Main Street", RED};
    lights[1] = {"Broadway", YELLOW};
    lights[2] = {"Sunset Boulevard", GREEN};

    cout << "Intersection Traffic Light Status:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << lights[i].streetName << ":" << endl;
        cout << "Light: " << getLightColor(lights[i].state) << endl;
        cout << "Instruction: " << getInstruction(lights[i].state) << endl;
        cout << "\n";
    }
    return 0;
}