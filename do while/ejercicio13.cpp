//Serie de Fibonacci
//Muestra los primeros Ntérminos de la serie de Fibonacci utilizando 

#include <iostream>
using namespace std;

int main(){

int n;
int f = 0;
int fn = 1;
int c = 1;


cout << "FIBONACCI PARA ESCALERAS" << endl;
cout << "Cuantas escaleras tiene que subir?" << endl;
cin >> n;

while(c <= n){
    cout << f << endl;
    int siguiente = f + fn;
    f = fn;
    fn = siguiente;
    c++;
   
    
}


    return 0;
}