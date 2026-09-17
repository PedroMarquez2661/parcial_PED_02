#include <iostream>
using namespace std;

void duplicarValores(int& a, int& b){

    a  = a  * 2; 
    b = b * 2 ; 
}
int main(){
    int x, y; 
    cout<<"Ingresa los valores de x y "<<endl;
    cin>>x>>y;
    duplicarValores(x,y);
    cout<<"x: " <<x<<", y "<< y <<endl;
    return 0; 
}