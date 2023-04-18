#include <iostream>

using namespace std;

// Funcion descuento
float disc(int cantProduct, int price)
{
    if (cantProduct >= 2)
    {
        return 0.2 * price * cantProduct;
    }
    else
    {
        return 0;
    }
}

// Funcion IVA

float ivaCalc(float subtotal)
{
    return 0.15 * subtotal;
}

int main()
{
    int cantProduct;
    float price, subtotal, discount, iva, total;

    /* Solicitar los datos al usuario */
    cout << "Ingrese el precio del articulo: ";
    cin >> price;
    cout << "Ingrese la cantidad de articulos que quiere comprar: ";
    cin >> cantProduct;

    // Calculacion del descuento, IVA, subtotal y total
    discount = disc(cantProduct, price);
    subtotal = (price * cantProduct) - discount;
    iva = ivaCalc(subtotal);
    total = subtotal + iva;

    // Mostrar el resultado en terminal
    cout << "El monto a pagar es de: $ " << total << endl;

    return 0;
}