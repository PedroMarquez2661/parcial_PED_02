#include <iostream>

using namespace std;

/*En este ejercicio se lee una matriz de 3x3 y se calcula el promedio de cada fila de forma independiente.*/

int main(){
    int notas [3][3]  ={
        {8,8,7},
        {6,10,8},
        {9,9,9}
    };
    for (int i = 0; i < 3; i++)
    {
        int Sumafila = 0; //Se reinicia el acumuladores para cada fila 
        for (int j = 0; j < 3; j++){
            Sumafila += notas[i][j];
        }
        double promedio = Sumafila / 3.0; //Uso de 3.0 para forzar division 
        cout<<"Promedio de la fila "<<i + 1 <<":"<<promedio<<endl;
    }
    








    return 0;
}