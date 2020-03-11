int main(){
    int N, a , b, c, d;
    cout << "Digite o numero de 4 digitos ";
    cin >> N;
        a = N%10;
b = (N%100)/10;
c = (N%1000)/100;
d = N/1000;
if((a == d) && (b == c))
            cout << "e uma capicua";
        else
            cout << "nao e uma capicua";
}
