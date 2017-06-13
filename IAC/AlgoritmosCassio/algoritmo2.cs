using System;

class algoritmo2{

    static void Main(){

        int idade;

        do{
            Console.WriteLine("Digite a sua idade: ");
            idade=int.Parse(Console.ReadLine());
            if((idade<0) || (idade>100))
                Console.WriteLine("Digite uma idade válida! ");
        }
        while((idade<0) || (idade>100));
            if((idade>=0) && (idade<=100)){
                if(idade<18 ZZ idade>60)
                    Console.WriteLine("Voto obrigatório. ");
                if(idade<18 || idade>60)
                    Console.WriteLine("Voto não obrigatório. ");
            }
        Console.ReadLine();
    }
}