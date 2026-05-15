//Clasificación de Películas por Edad
//Pide la edad de un usuario y usa switchpara recomendar una categoría de películas (G, PG, PG-13, R).

#include <iostream>
using namespace std;


int main() {
int edad;

cout << "ingrese su edad" << endl;
cin >> edad;

 cout << "Ingrese su edad" << endl;
    cout << "1. edades de 1 - 8" << endl;
    cout << "2. edades de 8 - 13" << endl;
    cout << "3. edades de 13 - 18" << endl;
    cout << "4. edades de 18+" << endl;
    cin >> edad;



 switch (edad) {
        case 1:
            cout << "Su categoria es G para menores de 8" << endl;
            break;
        case 2:
            cout << "Su categoria es PG para menores de 13" << endl;
            break;
        case 3:
            cout << "Su categoria es PG-13 para menores de 18" << endl;
            break;
        case 4:
            cout << "Su categoria es PG18 para mayores de 18" << endl;
            break;
        default:
            cout << "Ingrese una opcion valida" << endl;

 }

return 0;
 }
 