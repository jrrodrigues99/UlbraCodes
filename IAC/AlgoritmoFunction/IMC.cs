using System;

class CalculoIMC{

    public static void Main(){

        float  Altura=0;
        float  Peso=0;
        float  Result=0;
        string Sexo;

        Console.WriteLine("Informe seu sexo com 'H' ou 'M' ");
        Sexo = Console.ReadLine();

        Console.WriteLine("Qual a sua altura? Ex: 1,80 ");
        Altura = float.Parse(Console.ReadLine());

        Console.WriteLine("Qual o seu peso? ");
        Peso = float.Parse(Console.ReadLine());

        Result =   Peso / (Altura * Altura);
        Console.WriteLine(+Result);
    
        if(Sexo=="M" || Sexo=="m"){
            if(Result<19.1)
                Console.WriteLine("Você está abaixo do peso. ");
            else if(Result>19.1 && Result<25.8)
                Console.WriteLine("Você está no peso normal. ");
            else if(Result<25.8 && Result<27.3)
                Console.WriteLine("Você está marginalmente acima do peso. ");
            else if(Result<27.3 && Result<32.3)
                Console.WriteLine("Você está acima do peso ideal. ");
            else
                Console.WriteLine("Você está obeso. ");
            }
        if(Sexo=="H" || Sexo=="h"){
            if(Result<20.7)
                Console.WriteLine("Você está abaixo do peso. ");
            else if(Result>20.7 && Result<26.4)
                Console.WriteLine("Você está no peso normal. ");
            else if(Result<26.4 && Result<27.8)
                Console.WriteLine("Você está marginalmente acima do peso. ");
            else if(Result<27.8 && Result<31.1)
                Console.WriteLine("Você está acima do peso ideal. ");
            else
                Console.WriteLine("Você está obeso. ");
         }        

        Console.ReadLine();

    }
}