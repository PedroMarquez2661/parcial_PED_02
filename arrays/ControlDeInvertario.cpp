#include <iostream>
using namespace std;

/*Una tienda tiene 3 sucursales y vende 3 tipos de productos (Kimonos, Shorts y Rashguards).
Se representa el stock mediante una matriz de 3x3, donde las filas son las sucursales y las
columnas los productos. Se busca calcular el inventario total de la tienda y determinar qué
sucursal tiene más productos acumulados.*/

int main()
{
    int invetario[3][3] = {
        {15, 20, 12}, // sucursal 1
        {8, 10, 5},   // sucursal 2
        {25, 18, 20}  // sucursal 3
    };
    // Variables de control
    int totalTienda = 0;    // Acumulará la suma de TODOS los elementos de la matriz
    int mayorStock = -1;    // Guardará la cantidad máxima de productos encontrada en una sucursal
    int sucursalLider = -1; // Guardará el número (1, 2 o 3) de la sucursal con mayor stock

    for (int i = 0; i < 3; i++)
    {
        int totalSucursal = 0; // Variable local para sumar ÚNICAMENTE los productos de la sucursal actual (fila i)

        for (int j = 0; j < 3; j++)
        {
            totalSucursal += invetario[i][j];
            totalTienda += invetario[i][j];
        }
        cout << "Total de productos en sucursal" << i + 1 << ":" << totalSucursal << "unidades." << endl;

        // EVALUACIÓN DEL MÁXIMO:
        // Si el total de la sucursal actual es mayor que el récord registrado en 'mayorStock'...
        if (totalSucursal > mayorStock)
        {
            mayorStock = totalSucursal; // Actualizamos el récord con el nuevo valor máximo
            sucursalLider = i + 1;      // Guardamos el número de esta sucursal (1, 2 o 3)
        }
        // IMPRESION DE RESULTADOS FINALES:
        cout << "\n-------------------------------------------" << endl;
        cout << "Invetario total de la cadena: " << totalTienda << " unidades " << endl;
        cout << "Sucursal con mayor stock: sucursal" << sucursalLider << "( " << mayorStock << " unidades.)" << endl;
    }

    return 0;
}