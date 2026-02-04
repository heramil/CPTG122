#include <iostream>
using namespace std;

class ParkingMeter {
private:
    int meterID;
    int remainingMinutes;

public:
    ParkingMeter(int id = 0, int mins = 0) : meterID(id), remainingMinutes(mins) {}

    ParkingMeter operator+(int mins) const {
        return ParkingMeter(meterID, remainingMinutes + mins);
    }

    friend ParkingMeter operator+(int mins, const ParkingMeter& m) {
        return ParkingMeter(m.meterID, m.remainingMinutes + mins);
    }

    ParkingMeter& operator++() {
        remainingMinutes++;
        return *this;
    }

    ParkingMeter operator++(int) {
        ParkingMeter temp = *this;
        remainingMinutes++;
        return temp;
    }

    friend ostream& operator<<(ostream& os, const ParkingMeter& m) {
        os << "Meter ID: " << m.meterID << " | Remaining Time: " << m.remainingMinutes << " mins";
        return os;
    }
};

int main() {
    ParkingMeter m1(101, 30);

    ParkingMeter m2 = m1 + 20;
    ParkingMeter m3 = 10 + m1;

    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;

    cout << "Prefix: " << ++m1 << endl;
    cout << "Postfix: " << m1++ << endl;
    cout << "Final: " << m1 << endl;

    return 0;
}
