#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    int edad;
    float nota;
};

void MotrasEstudiante(Estudiante e)
{
    cout << "------DATOS----------" << endl;
    cout << "Nombre: " << e.nombre << endl;
    cout << "Edad: " << e.edad << " anos " << endl;
    cout << "Nota: " << e.nota << endl;
}
int main()
{

    Estudiante e1;
    e1.nombre = "Carlos";
    e1.edad = 20;
    e1.nota = 8.5;
    MotrasEstudiante(e1);

    return 0;
}