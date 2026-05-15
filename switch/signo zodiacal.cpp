#include <iostream>
using namespace std;

int main() {
    int mes; // variable entera para el mes

    cout << "Ingrese el mes de nacimiento (1-12): ";
    cin >> mes;
    
    switch (mes) {
        case 1:
            cout << "Tu signo es Capricornio" << endl;
            break;
        case 2:
            cout << "Tu signo es Acuario" << endl;
            break;
        case 3:
            cout << "Tu signo es Piscis" << endl;
            break;
        case 4:
         cout << "Tu signo es Aries" << endl;
         break;
        case 5:
         cout << "Tu signo es Tauro" << endl;
         break;
        case 6:
         cout << "Tu signo es Géminis" << endl;
         break;
        case 7:
         cout << "Tu signo es Cáncer" << endl;
         break;
        case 8:
         cout << "Tu signo es Leo" << endl;
         break;
        case 9:
         cout << "Tu signo es Virgo" << endl;
         break;
        case 10:
         cout << "Tu signo es Libra" << endl;
         break;
        case 11:
         cout << "Tu signo es Escorpio" << endl;
         break;
        case 12:
         cout << "Tu signo es Sagitario" << endl;
         break;

        default:
         cout << "ingrese un numero del 1 al 12" << endl;
    }

    return 0;
}
