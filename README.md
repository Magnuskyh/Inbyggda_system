Inbyggda system programmering
Uppgift 1, Magnus Petersson
20241001

Beskrivning
Detta C++-program beräknar en cirkels area, diameter och omkrets baserat på en användardefinierad radie. 
Programmet har inbyggd felhantering som ser till att användaren anger ett positivt tal som radie. 
Om ett ogiltigt värde anges (t.ex. ett negativt tal, noll eller en bokstav), 
får användaren ett felmeddelande och ombeds att ange radien på nytt.

Funktionalitet
Inmatning: Användaren matar in radien på en cirkel i meter. Observera att tal med decimaler skall matas in med "." tex 5.5. 
Uträkningar: Programmet beräknar:
Cirkelns area.
Cirkelns diameter.
Cirkelns omkrets.

Felhantering: Programmet kontrollerar att radien är ett giltigt positivt tal. Vid ogiltig inmatning (t.ex. negativa tal, noll eller ogiltiga tecken) kommer användaren att ombes att ange radien igen.

Teknologier och bibliotek
C++ Standardbibliotek: Används för in- och utmatning (<iostream>), felhantering (<limits>), matematiska beräkningar (<cmath>), och formatering av resultatet (<iomanip>).
Windows.h: För att ställa i ÅÄÖ

Installation och körning
Man behöver installera en C++ kompilator på systemet tex g++ (MinGW).
Efter det behövs en textredigerare eller IDE för att skriva och kompilera progremmet tex Notepad++

Kompilering och körning
Öppna en terminal eller kommandotolk
Navigera till den katalog källkoden finns. (uppgift1.cpp)
Kompilera koden med följande kommando: g++ uppgift1.cpp -o uppgift
Kör det kompilerade programmet med följande kommando: ./uppgift

Användning
När du kör programmet, kommer du att uppmanas att ange en radie i meter.
Programmet kommer att beräkna och skriva ut:
Cirkelns diameter (i meter).
Cirkelns omkrets (i meter).
Cirkelns area (i kvadratmeter).
Om du matar in ett ogiltigt värde, får du ett felmeddelande och ombeds att försöka igen.
