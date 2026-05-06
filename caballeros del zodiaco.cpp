#include <iostream>
using namespace std;

int main() { 
int mes;

cout << "ingrese su mes de nacimiento" << endl;

cout << "1. enero" << endl;
cout << "2. febrero" << endl;
cout << "3. marzo" << endl;
cout << "4. abril" << endl;
cout << "5. mayo" << endl;
cout << "6. junio" << endl;
cout << "7. julio" << endl;
cout << "8. agosto" << endl;
cout << "9. septiembre" << endl;
cout << "10. octubre" << endl;
cout << "11. noviembre" << endl;
cout << "12. diciembre" << endl;

cin >> mes;

switch (mes){
case 1: 
cout << "tu signo es capricornio" << endl; 
break;
case 2:
cout <<"tu signo es acuario" << endl;
break;
case 3:
cout << "tu signo es piscis" << endl;
break;
case 4:
cout << "tu signo es Aries" << endl;
break;
case 5:
cout  << "tu signo es Tauro" << endl;
break;
case 6:
cout << "tu signo es Geminis" << endl;
break;
case 7: 
cout << "tu signo es Cancer" << endl; 
break;
case 8:
cout <<"tu signo es Leo" << endl;
break;
case 9:
cout << "tu signo es Virgo" << endl;
break;
case 10:
cout << "tu signo es Libra" << endl;
break;
case 11:
cout  << "tu signo es Escorpio" << endl;
break;
case 12:
cout << "tu signo es Sagitario" << endl;
break;

default:
cout << "¡ingrese una opcion valida!" << endl;

return 0;

}













}