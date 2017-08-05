using System;

class Menu{

    public static void Main(){

        int operacao;
        
        do{
            Console.WriteLine("Escolha uma das opções abaixo: ");

            Console.WriteLine("[1] - Tabuada");
            Console.WriteLine("[2] - Dias Vividos");
            Console.WriteLine("[3] - Media Ulbra");
            Console.WriteLine("[4] - Cálculo IMC");
            Console.WriteLine("[5] - Sair do programa");
            
            operacao = int.Parse(Console.ReadLine());

            switch(operacao){
                case 1:
                Tabuada();
                break;
                case 2:
                DiasVividos();
                break;
                case 3:
                MediaUlbra();
                break;
                case 4:
                IMC();
                break;
            }
        }while(operacao!=5);
    }


static void Tabuada(){

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


static void DiasVividos(){

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


static void MediaUlbra(){
    
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


static void IMC(){

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
                Console.WriteLine("Você está acima do peso. ");
            else
                Console.WriteLine("Você está obeso. ");
         }        

        Console.ReadLine();
    }






}