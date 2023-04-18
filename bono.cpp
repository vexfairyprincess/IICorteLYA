/*En un Centro de Atención al Cliente (CAT) de una empresa X de Nicaragua se ha
establecido una política de bono para incentivar a sus empleados. Considere las siguientes
condiciones para recibir el incentivo:*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num; 
    cout << "Dime la cantidad de llamadas que has hecho en la semana:"<<endl;
    cin>> num;

    if (num > 50 && num < 100){
        cout << "Felicidades, has recibido un bono de C$1,000.00."<<endl;
    }
    else if ( num > 100 && num <150){
        cout << "Felicidades, has recibido un bono de C$1,500.00"<<endl;
    }
    else if(num > 150){
        cout << "Felicidades, has recibido un bono de C$2,000.00"<<endl;
    }

    
    return 0;
}
