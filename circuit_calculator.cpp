#include <iostream>
#include <cmath>
using namespace std;

class OhmsLaw {
public:
    void calculate() {
        int choice;
        cout << "\nOhm's Law Calculator (V = IR)" << endl;
        cout << "1. Find Voltage (V)" << endl;
        cout << "2. Find Current (I)" << endl;
        cout << "3. Find Resistance (R)" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            float I, R;
            cout << "Enter Current (A): "; cin >> I;
            cout << "Enter Resistance (Ohms): "; cin >> R;
            cout << "Voltage = " << I * R << " V" << endl;
        } else if(choice == 2) {
            float V, R;
            cout << "Enter Voltage (V): "; cin >> V;
            cout << "Enter Resistance (Ohms): "; cin >> R;
            cout << "Current = " << V / R << " A" << endl;
        } else if(choice == 3) {
            float V, I;
            cout << "Enter Voltage (V): "; cin >> V;
            cout << "Enter Current (A): "; cin >> I;
            cout << "Resistance = " << V / I << " Ohms" << endl;
        }
    }
};

class ResistanceCalc {
public:
    void series() {
        int n;
        cout << "\nHow many resistors? "; cin >> n;
        float total = 0, r;
        for(int i = 1; i <= n; i++) {
            cout << "Enter R" << i << " (Ohms): "; cin >> r;
            total += r;
        }
        cout << "Total Series Resistance = " << total << " Ohms" << endl;
    }

    void parallel() {
        int n;
        cout << "\nHow many resistors? "; cin >> n;
        float total = 0, r;
        for(int i = 1; i <= n; i++) {
            cout << "Enter R" << i << " (Ohms): "; cin >> r;
            total += 1/r;
        }
        cout << "Total Parallel Resistance = " << 1/total << " Ohms" << endl;
    }
};

class PowerCalc {
public:
    void calculate() {
        int choice;
        cout << "\nPower Calculator (P = VI)" << endl;
        cout << "1. Find Power (P)" << endl;
        cout << "2. Find Voltage (V)" << endl;
        cout << "3. Find Current (I)" << endl;
        cout << "Enter choice: "; cin >> choice;

        if(choice == 1) {
            float V, I;
            cout << "Enter Voltage (V): "; cin >> V;
            cout << "Enter Current (A): "; cin >> I;
            cout << "Power = " << V * I << " W" << endl;
        } else if(choice == 2) {
            float P, I;
            cout << "Enter Power (W): "; cin >> P;
            cout << "Enter Current (A): "; cin >> I;
            cout << "Voltage = " << P / I << " V" << endl;
        } else if(choice == 3) {
            float P, V;
            cout << "Enter Power (W): "; cin >> P;
            cout << "Enter Voltage (V): "; cin >> V;
            cout << "Current = " << P / V << " A" << endl;
        }
    }
};

class RCCircuit {
public:
    void calculate() {
        float R, C;
        cout << "\nRC Circuit Calculator" << endl;
        cout << "Enter Resistance (Ohms): "; cin >> R;
        cout << "Enter Capacitance (Farads): "; cin >> C;
        float timeConstant = R * C;
        cout << "Time Constant (T) = " << timeConstant << " seconds" << endl;
        cout << "Time to fully charge (5T) = " << 5 * timeConstant << " seconds" << endl;
    }
};

class LEDCalculator {
public:
    void calculate() {
        float Vs, Vf, If;
        cout << "\nLED Resistor Calculator" << endl;
        cout << "Enter Supply Voltage (V): "; cin >> Vs;
        cout << "Enter LED Forward Voltage (V): "; cin >> Vf;
        cout << "Enter LED Forward Current (A): "; cin >> If;
        float R = (Vs - Vf) / If;
        cout << "Required Resistor = " << R << " Ohms" << endl;
    }
};

int main() {
    int choice;
    OhmsLaw ohm;
    ResistanceCalc res;
    PowerCalc power;
    RCCircuit rc;
    LEDCalculator led;

    while(1) {
        cout << "\n=============================" << endl;
        cout << "  ECE Circuit Calculator" << endl;
        cout << "=============================" << endl;
        cout << "1. Ohm's Law (V = IR)" << endl;
        cout << "2. Series Resistance" << endl;
        cout << "3. Parallel Resistance" << endl;
        cout << "4. Power Calculator (P = VI)" << endl;
        cout << "5. RC Circuit Time Constant" << endl;
        cout << "6. LED Resistor Calculator" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) ohm.calculate();
        else if(choice == 2) res.series();
        else if(choice == 3) res.parallel();
        else if(choice == 4) power.calculate();
        else if(choice == 5) rc.calculate();
        else if(choice == 6) led.calculate();
        else if(choice == 7) {
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}