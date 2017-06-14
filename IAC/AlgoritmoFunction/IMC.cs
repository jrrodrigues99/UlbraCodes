using System;

class CalculoIMC{

    public static void Main(){

        float  Altura=0;
        float  Peso=0;
        float  Result=0;
        string Sexo;

        Console.WriteLine("Digite seu sexo representado por 'M' ou 'F': ");
        Sexo = Console.ReadLine();

        Console.WriteLine("Qual a sua altura? ");
        Altura = float.Parse(Console.ReadLine());

        Console.WriteLine("Qual o seu peso? ");
        Peso = float.Parse(Console.ReadLine());

        Result = Peso / (Altura * Altura);

        if(Sexo == "M")
            Console.WriteLine("Você é homem ");
        else
            Console.WriteLine("Você é mulher ");

        Console.ReadLine();

    }
}