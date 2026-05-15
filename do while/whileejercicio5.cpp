// Suma de Números Pares
// Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int c = 1;
    int s = 0;

    cout << "Ingrese un numero" << endl;
    cin >> n;
    do
    {
       
        s = s + c;

        if (c % 2 == 0)
        {
            s = s + c;
        }
        c = c + 1;

    } while (c <= n);

    cout << "La suma de los numeros pares desde 1 hasta " << n << " es: " << s << endl;


    return 0;
}