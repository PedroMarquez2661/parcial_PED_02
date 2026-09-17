#include <iostream>
int edad1;
 void ProcesareEdad (int edad){
    if (edad<=0){
        std::cout<<"Erro papito, dame algo real"<<std::endl;
        return;// Interrumpe la ejecución de la función inmediatamente
    }
    std::cout<<"Edad registrada correctamente "<<edad<<std::endl;
}

int main(){
    std:: cout <<"Ingresa tu edad: "<<std::endl;
    std:: cin>>edad1;
    ProcesareEdad(edad1);



    return 0;
}