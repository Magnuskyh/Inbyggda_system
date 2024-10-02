#include <iostream>     // Standard bibliotek som hanterar funktioner för in och utmatning
#include <cmath>        // Behövs för att kunna använda M_PI
#include <limits>       // För att kunna hantera felaktig inmatning
#include <iomanip>      // Funktioner för att kunna manipulera in och utmatning
#include <windows.h>    // Behövs för att kunna presentera ÅÄÖ i utskrifterna

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);	// Detta är för att ställas in för att kunna använda ÅÄÖ.
    float radien;					// nedan fyra variabler är för att hålla informationen så ekvationerna längre ner blir "renare"
    float area;						
    float diameter;
    float omkretsen;

    while (true) {					// Här skapas en evig loop till rätt inmatning skett
        // Ber användaren skriva in radien på cirkeln
		cout << "Skriv in radien av cirkeln i meter: ";
        cin >> radien;
									// Här kontrollerar vi om inmatningen är korrekt 
        if (cin.fail() || radien <= 0) {
									// Återställning om inmatning blivit fel 
            cin.clear();			// Rensar felstatus
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 	// Rensar felaktig inmatning
            cout << "Felaktig inmatning, försök igen";				// Genererar ett felmeddelande om ogiltlig inmatning
        } else { 					// Om inmatning korrekt avlutas loopen
            break;
        }
    }
	// nedan uträkningar för att få fram önskade värden
    area = M_PI * radien * radien;
    diameter = 2 * radien * 100;
    omkretsen = 2 * M_PI * radien * 100;

    cout << fixed << setprecision(2);		// Sätter utsriften till 2 decimaler
    cout << "Diametern av cirkeln är: " << diameter << " cm" << endl;
    cout << "Omkretsen är: " << omkretsen << " cm" << endl;
    cout << "Arean av cirkeln är: " << area << " m^2" << endl;

    return 0;
}
