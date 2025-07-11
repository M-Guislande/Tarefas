#include <iostream>

#include <iomanip>

#define GREEN "\033[32m"

#define RESET "\033[0m"

using namespace std;

int main()

{

	int num_funcionario;

	int numeroDoFuncionario;

	double HrsDtrabalho;

	double valorH;

	double salario;

	cout << GREEN << "----------------------------------\n";

	cout << "Calculo de salario de funcionarios\n";

	cout << "----------------------------------\n";

	cout << "Quantos funcionarios voce tem? \n";

	cin >> num_funcionario;

	for (int i = 0; i < num_funcionario; i++) {

		cout << "\nQual numero do funcionario? \n";

		cin >> numeroDoFuncionario;

		cout << "Quantas horas foram trabalhadas? \n";

		cin >> HrsDtrabalho;

		cout << "Quanto o funcionario recebe por hora? \n";

		cin >> valorH;

		salario = HrsDtrabalho * valorH;

		cout << "--------------------------------------------------\n";

		cout << "funcionario: " << numeroDoFuncionario << endl;

		cout << "Seu salario mes foi: " << fixed << setprecision(2) << salario << "R$ \n";

		cout << "--------------------------------------------------\n";


	}

	cout << RESET;

}