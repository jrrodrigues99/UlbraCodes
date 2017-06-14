using System;

class Tabuada{

    public static void Main(){

        int Numero=0;
        int Result=0;

        Console.WriteLine("Qual numero voce quer a tabuada? ");
        Numero = int.Parse(Console.ReadLine());

        for (int i = 0; i<=10; i++){
            Result = Numero * i;
            Console.WriteLine(Numero + "x" + i + "=" + Result);
        }
        Console.ReadLine(); 
    }

}