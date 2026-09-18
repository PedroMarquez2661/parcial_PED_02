#include <iostream>
using namespace std;

struct persona
{
    string nombre;
    int edad;
};
void imprimirLista(persona lista[], int tamano)
{
    cout << "\n=== LISTA DE REGISTROS ===" << endl;
    for (int i = 0; i < tamano; i++)
    {
        cout << i + 1 << "." << lista[i].nombre << " - " << lista[i].edad << "anos" << endl;
    }
}

int main()
{

    persona grupo[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresa el nombre de la Persona" << i + 1 << " : ";
        cin >> grupo[i].nombre;
        cout << "Ingresa la edad de " << grupo[i].nombre << " : ";
        cin >> grupo[i].edad;
    }
    imprimirLista(grupo, 3);

    return 0;
}
