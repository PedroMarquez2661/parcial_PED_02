#include <iostream>
using namespace std;

/*Un sistema donde las funciones void coordinan las operaciones de un cajero procesando 
un saldo que se gestiona localmente en el main*/

void depositar(double saldoActual, double cantidad){
    if(cantidad<=0){
        cout<<"catidad invada"<<endl;
        return;
    }
    cout<<"Deposito existo. Nuevo Saldo simulado: $"<<(saldoActual+cantidad)<<endl;
}

void retirar(double SaldoActual, double Cantidad){
    if(Cantidad<=0){
        cout<<"Cantidad Invalidad"<<endl;
        return;
    }
    if (Cantidad>SaldoActual){
        cout<<"ERROR: NO TINES PISTO "<<endl;
        return;
    }
    cout <<"Retiro exitoso, Nuevo saldo: $"<<(SaldoActual-Cantidad)<<endl;
    
}
int main(){

    double saldo = 500.0;
    int opcion;
    double monto;

    cout<<"Saldo actual: $"<<saldo<<endl;
    cout<<"1.Depositar\n2 Retirar\n Selecciona una opcion: ";
    cin>>opcion;

    cout<<"Ingeresa el monto: $";
    cin >> monto;

    if (opcion==1)
    {
        depositar(saldo,monto);
    }else if (opcion ==2){
        retirar(saldo,monto);
    }else{
        cout<<"opcion no validad"<<endl;
    }
    
    




    return 0;
}
