using System;

class DiasVividos{

    public static void Main(){

        int Idade=0;
        int Dias=0;
        int Horas=0;

        Console.WriteLine("Entre com sua idade: ");
        Idade = int.Parse(Console.ReadLine());

        Dias = Idade * 365;
        Horas = Dias * 24;

        Console.WriteLine("Você já viveu " + Dias + " dias e " + Horas + " horas");
        Console.ReadLine();
    }
}