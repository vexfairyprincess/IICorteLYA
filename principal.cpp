#include <iostream>
#include "#1.cpp"
using namespace std;

int main(){
    int ejercicio;
    cout << "Selecciona un numero del 1 al 3 para ingresar al ejercicio correspondiente del examen." << endl;
    cout << " " << endl;
    cout << "1. Calcular el IVA, el descuento, el subtotal y el total a pagar de uno o mas ejemplares del mismo articulo." << endl;
    cout << "2. Calcular el precio a pagar por N hamburguesas." << endl;
    cout << "3. Segun la nueva politica de bono de una empresa, calcular el incentivo de un empleado." << endl;
    cin >> ejercicio;

    system("cls");
    switch (ejercicio)
    {
    case 1:
        calcPrecio();
        break;
    
    default:
    cout << "Ingreso un numero invalido." << endl;
        break;
    }
}