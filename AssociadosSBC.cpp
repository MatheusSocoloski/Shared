#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int Jai, minicursos, estudante;
    float data, valor, valor1, valorTotal, valor2;
    cout << "o estudante e associado a SBC? \n 1- Sim\n 2- Nao\n";
    cin >> estudante;
    cout << "\nData da inscricao: \n 1- de 04/05 ate 03/06\n 2- depois de 03/06\n";
    cin >> data;
    if(estudante == 1){
        if(data == 1)
            valor = 129.00;
        if(data == 2)
            valor = 150.00;
    }
    if(estudante == 2){
         if(data == 1)
            valor = 160.00;
        if(data == 2)
            valor = 184.00;
    }
    cout << "Deseja participar da JAI? \n 1- Sim\n 2- Nao\n";
    cin >> Jai;
    if(Jai == 1){
        if(estudante == 1)
            if(data == 1)
                valor1 = 86.00;
            if(data == 2)
                valor1 = 97.00;
        if(estudante == 2)
            if(data == 1)
                valor1 = 160.00;
            if(data == 2)
                valor1 = 184.00;

     cout<< "\nQuantos minicursos ou workshops deseja participar? \n";
    cin >> minicursos;
    if(minicursos == 2){
        valor2 = 0.05 * valor1;
        valorTotal = valor1 - valor2;
    }
    if(minicursos == 3){
        valor2 = 0.10 * valor1;
        valorTotal = valor1 - valor2;
    }
    if(minicursos == 3){
        valor2 = 0.20 * valor1;
        valorTotal = valor1 - valor2;
    }
}
    valorTotal = valorTotal + valor;

    if(Jai == 2){
        valorTotal = valor;
    }

    cout << "O valor total das incricoes e: " << valorTotal << " reais";
}
