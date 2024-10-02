#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float radien;
    float area;
    float diameter;
    float omkretsen;

    while (true) {
        cout << "Skriv in radien av cirkeln i meter: ";
        cin >> radien;

        if (cin.fail() || radien <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Felaktig inmatning, försök igen";
        } else {
            break;
        }
    }

    area = M_PI * radien * radien;
    diameter = 2 * radien * 100;
    omkretsen = 2 * M_PI * radien * 100;

    cout << fixed << setprecision(2);
    cout << "Diametern av cirkeln är: " << diameter << " cm" << endl;
    cout << "Omkretsen är: " << omkretsen << " cm" << endl;
    cout << "Arean av cirkeln är: " << area << " m^2" << endl;

    return 0;
}
