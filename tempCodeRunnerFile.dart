#include <iostream>
using namespace std;

class SmartLight {
private:
    string brand;
    int brightness;
    bool isOn;

public:
    SmartLight() {
        brand = "DefaultBrand";
        brightness = 50;
        isOn = false;
    }

    SmartLight(string b, int br, bool state) {
        brand = b;
        brightness = br;
        isOn = state;
    }

    void turnOn() {
        isOn = true;
        cout << brand << " Light turned ON.\n";
    }

    void turnOff() {
        isOn = false;
        cout << brand << " Light turned OFF.\n";
    }

    void increaseBrightness() {
        if (brightness < 100) {
            brightness += 10;
            if (brightness > 100)
                brightness = 100;
        }
        cout << "Brightness Increased to " << brightness << endl;
    }

    void decreaseBrightness() {
        if (brightness > 0) {
            brightness -= 10;
            if (brightness < 0)
                brightness = 0;
        }
        cout << "Brightness Decreased to " << brightness << endl;
    }

    void displayStatus() {
        cout << "\nBrand: " << brand << endl;
        cout << "Brightness: " << brightness << endl;
        cout << "Status: " << (isOn ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartLight light1;
    SmartLight light2("Philips", 70, true);

    light1.displayStatus();
    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    light2.displayStatus();
    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
}
