/*
Construa um algoritmo
que leia 10 números inteiros e armazene-os
em um vetor (use o for para fazer a leitura).
Depois, crie automaticamente dois
vetores, um contendo apenas os números
pares e outro os números ímpares
digitados.
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int quant_par =0, quant_impar=0;
    //introduz os vetores com o tamanho que a tarefa pede
    vector<int> vetor(10);
    vector<int> impar(vetor.size());
    vector<int> par(vetor.size());
    for(int i =0; i<vetor.size();i++)
    {
        cout<<"Entre com o "<< i+1 << " numero inteiro"<<endl;
        cin >> vetor[i];
    }
    // analisa cada valor do vetor e verifica se ele é impar ou par
    for(int num :vetor){
        if (num%2==0)
        {
            par[quant_par] = num;
            quant_par++;
        }
        else{
            impar[quant_impar] = num;
            quant_impar++; 
        }
    }
    //mostra os numeros impares/pares se eles apareceram no vetor 
    cout<<"Numeros pares:"<< endl;
    for(int i = 0; i<quant_par; i++)
    {
        cout << par[i] << endl;
    }
    cout<<"Numeros impares:"<< endl;  
    for(int i = 0; i<quant_impar; i++)
    {
        cout << impar[i]<< endl;
    }
}