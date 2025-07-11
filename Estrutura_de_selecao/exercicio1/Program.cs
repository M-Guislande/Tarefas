// See https://aka.ms/new-console-template for more information
Console.ForegroundColor = ConsoleColor.Green;
Console.WriteLine("Digite um numero intero e o programa dira se é par ou impar");
Console.WriteLine("-----------------");
Console.WriteLine("Digite um numero");
Console.WriteLine("-----------------");
int numero = int.Parse(Console.ReadLine());

if (numero%2==0) 
{
Console.WriteLine("Numero é par");
}
else{
 Console.WriteLine("Numero é impar");
}
Console.ResetColor();