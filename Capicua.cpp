#include <iostream>

using namespace std;

int main(){
    int V[4];
    cout << "Digite o numero de 4 digitos ";
    cin >> V[4];

    V[0] = V[4]%10;
    V[1] = (V[4]%100)/10;
    V[2] = (V[4]%1000)/100;
    V[3] = V[4]/1000;

    if((V[0] == V[3]) && (V[1] == V[2]))
        cout << "e uma capicua" << endl;
    else
        cout << "nao e uma capicua" << endl;
}

