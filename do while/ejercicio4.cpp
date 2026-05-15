// Menú Interactivo
// Crea un menú que se repita hasta que el usuario elija la opción de salir.

#include <iostream>
using namespace std;

int main()
{
    int s = 4;
    int p;

    cout << "Elige a tu amigo pokemon" << endl;
    do
    {
        cout << "1. Tipo fuego" << endl;
        cout << "2. Tipo agua" << endl;
        cout << "3. Tipo planta" << endl;
        cout << "4. salir" << endl;
        cin >> p;

    } while (s != 4);
    {

        switch (p)
        {
        case 1:
            cout << "Elegiste a Charmander" << endl;
            break;

        case 2:
            cout << "Eleiste a Froakie" << endl;
            break;

        case 3:
            cout << "Lastima elegiste Chikorita" << endl;
            break;
        }
    }

    return 0;
}
