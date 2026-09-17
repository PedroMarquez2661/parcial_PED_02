#include<iostream>
using namespace std;

void EvaluarNota (int nota){
    if (nota< 0|| nota>10){
        cout <<"ERROR: LA NOTA DEBE DE SER ENTRE 0 Y 10"<<endl;
        return; //Sale de la función si la nota es inválida
    }
    if (nota >= 6)
    {
        cout<<"Resultado: APROBADO"<<endl;
    }else{
        cout <<"RESUldado : Reprobado"<<endl;
    }
    
    }
    int main(){

        int Nota;
        cout<<"Ingresa tu nota del 1 al 10 ";
        cin>>Nota;
        EvaluarNota(Nota);
        return 0 ;
    }