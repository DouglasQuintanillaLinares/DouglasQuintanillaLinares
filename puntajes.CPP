#include <iostream>

using namespace std;

int main (){

    int p;

    cout << "ingrese su puntaje" << endl;
    cout << "1. su puntaje fue de 1" << endl;
    cout << "2. su puntaje fue de 2" << endl;
    cout << "3. su puntaje fue de 3" << endl;
    cout << "4. su puntaje fue de 4" << endl;
    cout << "5. su puntaje fue de 5" << endl;
    cin >> p;

    switch (p){

        case 1: 
        cout << "tu puntaje fue de 1 debes mejorar" << endl;
        break;
        case 2: 
        cout << "tu puntaje fue de 2 no esta mal" << endl;
        break;
        case 3:
        cout << "tu puntaje fue de 3 bien falto poco" << endl;
        break;
        case 4: 
        cout << "tu puntaje fue de 4 muy bien casi ganas" << endl;
        break;
        case 5:
        cout << "tu puntaje fue de 5 excelente ganaste" << endl;
        break;
        default:
        cout << "ingrese una opcion del menu" << endl;
    }
    return 0;
}