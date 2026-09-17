#include <iostream>
using namespace std;

void tablaDemultiplicar(int numero){
    cout<<"tabla de "<<numero<<":"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " x "<<i<<" = "<<(numero * i)<<endl;
    }
    
}
int main(){
    int  num;
    cout<<"Ingrese el numero: ";
    cin >> num;
    tablaDemultiplicar(num);
    return 0;
}