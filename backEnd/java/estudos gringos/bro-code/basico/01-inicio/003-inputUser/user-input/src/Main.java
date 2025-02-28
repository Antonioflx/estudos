/*
    Scanner é um objeto que nos
    ajuda a pegar a entrada em java do usuário

    Para usarmos, precisamos importa-lo do pacote específico (utilitário)

    import -> importar
    java.util (package)
    java.util.Scanner -> Scanner (class)
    import java.util.Scanner
 */


/*
    Explicação package

    Um pacote de Java é usado para agrupar classes relacionadas.
    Pasta -> diretório de arquivos.
        Duas categorias:
            1. Pacotes da API Java
            2. Pacotes definidos pelo usuário (o usuário cria os pacotes)


    Pacotes da API Java -> https://docs.oracle.com/javase/8/docs/api/ .

    Podemos importa uma única classe como o caso do Scanner
    Ou a biblioteca inteira.

    1. Uma única classe
        import java.until.Scanner
            Scanner -> recurso de data e hora, random, etc.

    2. Todas as classes do java.util (package)
        import java.until.*


    // Caminho
        root
            mypack
                MyPackageClas.java

     Criar um pacote -> palavra chave package

    Ex:
    package mypack;
    class MyPackageClass {
        public static void main(String[] args) {
            System.out.println("This is my package!");
        }
    }
 */
import java.util.Scanner;

 class Main {

    public static void main(String[] args) {

        // precisamos criar um scanner objeto
        /*
            Scanner (indetificador) nome do objeto = new (novo) Scanner(System.in) ->
            System.in -> (entrada padrão de texto -> teclado ou arquivo de texto)

            Boa prática -> ao fim do uso fechar o Scanner

            scanner.close() -> parece ser tipo o free.
         */
//        Scanner scanner = new Scanner(System.in);


        /*
            Parece ser a mascara de identificação de C
            %d -> inteiro
            %f -> float

            nextLine() -> é um método para ler String -> e com os espaço
            next() -> Le sem espaço
            nextBoolean() -> ler boolean
            nextByte() -> Ler um byte
            nextDouble() -> ler double
            nextFloat() -> ler número real.
            nextInt() -> num inteiro
            nextLong() -> long value
            nextShort() -> short value
         */

//        System.out.print("Entre com o seu nome: ");
//        String name = scanner.nextLine(); // output = AAntonio Felix
////        String name = scanner.next(); // output = Antonio
//
////        scanner.next();
//        // se utilizar o next o age -> pega o buffer de entrada (enter) quando o usu digita o nome
//        System.out.print("Qual a sua idade? ");
//        int age = scanner.nextInt();
//
//        System.out.println("Seu nome é " + name + " e voce tem " + age + " anos ");
////        System.out.println("Seu nome é " + name);
//
//        System.out.print("Enter a number real ");
//        double realNumber = scanner.nextDouble();
//
//        System.out.println("Num: " + realNumber);
//
//
//        // limpar o buffer
////        scanner.nextLine();
//        scanner.close();

        // Exercício
        // Calculate area of a rectangle

        double width, heigth, area;
        width = heigth = 0;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the width and heigth of the rectangle: ");
        width = scanner.nextDouble();
        heigth = scanner.nextDouble();

        System.out.println("Width: " + width + ", Heigth: " + heigth);
        System.out.println("Area: " + width + " x " + heigth + " = " + width * heigth);

        scanner.close();
    }
}
