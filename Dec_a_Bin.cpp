#include <iostream>

using namespace std;

int main() {
    int Dec, Bin = 0, Multiplicador = 1, G_Dec;
    cout<<"Ingrese un número: ";
    cin>>Dec;
    G_Dec = Dec;
    while (Dec != 0){
        Bin = Bin + Dec % 2 * Multiplicador;
        Dec /= 2;
        Multiplicador *= 10;
    }
    cout<<"El número "<<G_Dec<<" convertido a Biniario es: "<<Bin;
    return 0;
}
