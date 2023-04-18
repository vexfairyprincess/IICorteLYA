/* Ejercicio #2: “El náufrago satisfecho” ofrece hamburguesas sencillas, dobles y triples, las cuales
tienen un costo de C$50.00, C$75.00 y C$100.00 respectivamente; considere que se puede solicitar
más de una hamburguesa. La empresa acepta tarjetas de crédito con un cargo de 5 % sobre la
compra. Realice un algoritmo para determinar cuánto debe pagar una persona por N hamburguesas. */

#include <iostream>
using namespace std;

void ejercicio2();

void ejercicio2(){
    int cantHamb, opcHamb, acumPrecio = 0; //Variables en general.
    int cantSenci = 0, cantDoble = 0, cantTriple = 0; //Variables exclusivas para la cantidad de hamburguesas.
    cout<<"Bienvenido al naufrago satisfecho."<<endl;
    cout<<"Cuantas hamburguesas desea comprar ? (Ingrese cantidad numerica)."<<endl;
    cin>>cantHamb;

    system("cls");
    cout<<"------------MENU------------"<<endl;
        cout<<"1. Hamburguesa Sencilla - C$ 50"<<endl;
        cout<<"2. Hamburguesa Doble - C$ 75"<<endl;
        cout<<"3. Hamburguesa Triple - C$ 100"<<endl;
        cout<<endl;
    
    for (int i = 0; i < cantHamb; i++){
        cout<<"Ingrese el # para la hamburguesa "<<i+1<<" que desee."<<endl;
        cin>>opcHamb;    
        switch (opcHamb)
        {
        case 1:
            acumPrecio += 50;
            cantSenci += 1;
            break;
        
        case 2:
            acumPrecio += 75;
            cantDoble += 1;
            break;
        
        case 3:
            acumPrecio += 100;
            cantTriple += 1;
            break;
        
        default:
            cout<<"HAMBURGUESA NO VALIDA - NO SE TOMARA EN CUENTA ESTE  PEDIDO"<<endl;
            break;
        }
    }
    system("cls");

    int againMenu;
    cout<<"Su orden es la siguiente:"<<endl;
    cout<<cantSenci<<" hamburguesa(s) sencilla(s)."<<endl;
    cout<<cantDoble<<" hamburguesa(s) doble(s)."<<endl;
    cout<<cantTriple<<" hamburguesa(s) triple(s)."<<endl;
    cout<<endl;

    cout<<"Su orden esta bien asi o desea volverla a hacer ?"<<endl;
    cout<<"1. Si, esta perfecta."<<endl;
    cout<<"2. No, quiero volver a hacerla."<<endl;
    cin>>againMenu;
    system("cls");
    switch (againMenu){
    case 1:
        /* Procede al pago */
        int opcPago;
        cout<<"El total a pagar es de "<<acumPrecio<<endl;
        cout<<endl;
        cout<<"--- Opciones de pago ---"<<endl;
        cout<<"1. Efectivo."<<endl;
        cout<<"2. Tarjeta de credito."<<endl;
        cin>>opcPago;
        
        switch (opcPago){
        case 1:
            cout<<"Le agradecemos por su llegada."<<endl;
            break;
        
        case 2:
            cout<<"Por politicas de la empresa tiene un cargo del 5 porciento al pagar con tarjeta de credito."<<endl;
            cout<<"A como le mencione el total es de "<<acumPrecio<<endl;
            cout<<"Con el cargo le quedaria "<<(acumPrecio = (acumPrecio + (acumPrecio * 0.05)))<<endl;
            cout<<"Le agradecemos por su llegada.";
            break;
        
        default:
            system("cls");
            cout<<"ERROR EN EL SISTEMA - OPCION NO VALIDA"<<endl;
            cout<<"Volviendo al menu principal."<<endl;
            ejercicio2();
            break;
        }
        
        break;

    case 2:
        /* Vuelve al inicio. */
        system("cls");
        ejercicio2();
        break;
    
    default:
        system("cls");
        cout<<"ERROR EN EL SISTEMA - OPCION NO VALIDA"<<endl;
        cout<<"Volviendo al menu principal."<<endl;
        ejercicio2();
        break;
    }
}
