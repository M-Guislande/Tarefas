#include <iostream>
#include<locale>
using namespace std;

int main() {
    system("color 0A");
    setlocale(LC_ALL, "Portuguese.UTF-8");
    int quant = 0, divisor = 0;
    int num;
    double acumulador = 0;

    cout << "O programa calcula a média, ignorando os números ímpares." << endl;
    cout << "\n----------------" << endl;
    cout << "Calcule a média!" << endl;
    cout << "----------------" << endl;
    cout << "Digite a quantidade de números que deseja usar para calcular a média:" << endl;
    cin >> quant;
    while (quant > 0) {
        cout << "Digite um número:" << endl;
        cin >> num;

        if (num % 2 == 0)
        {
            acumulador += num;
            divisor++;
        }

        quant--;
    }

    if (divisor == 0) 
    {
        cout << "Nenhum número par foi inserido. Tente novamente." << endl;
    }
    else 
    {
        cout << "A média é: " << acumulador / divisor << endl;
    }
}