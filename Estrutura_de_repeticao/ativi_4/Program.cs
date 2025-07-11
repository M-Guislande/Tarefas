Console.ForegroundColor = ConsoleColor.Green;
Console.WriteLine("--------------");
Console.WriteLine(" ATIVIDADE 4  ");
Console.WriteLine("--------------\n");
Console.WriteLine("Digite um número e o sistema calcula a soma dos dígitos do quadrado desse número");
int num = int.Parse(Console.ReadLine());
int num_quadrado= num*num;
int  resultado = 0;
for(int i = num_quadrado; i>0; i/=10)
{
 resultado += i%10;
}
Console.WriteLine($"A soma de digitos é de: {resultado}");
Console.ResetColor();
