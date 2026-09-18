#include <iostream>
using namespace std;
struct Producto
{
    string nombre;
    double precio;
    int cantidad;
};

void MostrarProducto(Producto p)
{
    cout << "\n--- DETALLE DEL PRODUCTO ---" << endl;
    cout << "PRODUCTO: " << p.nombre << endl;
    cout << "PRECIO: " << p.precio << endl;
    cout << "STOCK DISPONIBLE: " << p.cantidad << endl;
    cout << "VALOR DE TODOS LOS PRODUCTOS EN GENEARL: " << (p.precio * p.cantidad) << endl;
}

int main()
{
    Producto prod1;
    cout << "Ingresa el nonbre del Producto ";
    cin >> prod1.nombre;
    cout << "Ingresa el precio del Producto ";
    cin >> prod1.precio;
    cout << "Ingresa la cantidad del Producto ";
    cin >> prod1.cantidad;
    MostrarProducto(prod1);

    return 0;
}
