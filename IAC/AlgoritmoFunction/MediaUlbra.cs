using System;

class MediaUlbra{

    public static void Main(){

        float G1=0;
        float G2=0;
        float Media=0;
        
        Console.WriteLine("Digite sua nota do G1: ");
        G1=float.Parse(Console.ReadLine());

        Console.WriteLine("Digite sua nota do G2: ");
        G2=float.Parse(Console.ReadLine());

        Media=(G1+(G2*2))/3;

        if(Media>=6)
            Console.WriteLine("Aprovado!");
        else
            Console.WriteLine("Em substituição...");

        Console.WriteLine("Sua média foi: "+Media);
        Console.ReadLine();
    }
}