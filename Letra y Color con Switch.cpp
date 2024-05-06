#include <iostream>

using namespace std;

int main()
{
    char Letra;
    cout <<"Ingrese la letra que corresponde al color: ";
    cin >> Letra;
    switch(Letra)
{
    case 'R':
    cout <<"Es Rojo";
    break;

    case 'Y':
    cout <<"Es Amarillo";
    break;

    case 'B':
    cout <<"Es Azul";
    break;

    case 'W':
    cout <<"Es Blanco";
    break;

    case 'K':
    cout <<"Es Negro";
    break;

    case 'C':
    cout <<"Es Cian";
    break;

    case 'G':
    cout <<"Es Verde";
    break;

    default:
    cout << "Error de opción";
}
return 0;
}