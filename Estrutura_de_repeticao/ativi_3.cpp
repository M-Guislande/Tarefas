#include <iostream>
using namespace std;
int main()
{
	system("color 0A");
	int acumulador=0;
	cout << "---------------" << endl;
    cout << "  ATIVIDADE 3  " <<endl;
	cout << "---------------" << endl;

	for (int num = 50;num<=500;num++)
	{
		if (num % 2 != 0 && num % 3 == 0) {
			acumulador += num;
		}
	}
	cout << acumulador;
	
}