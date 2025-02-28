/*
       * Primitivo                  * Reference (ponteiro)
        Direto na memória             Endereço de memória
          1. int                       1. string
          2. double                    2. array
          3. char                      3. object
          4. boolean

       2 Steeps to creating a variable

       * 1. declaration
            -> int age = 22;
            -> sout(age)

       * 2. assignment
 */

public class Main {

    public static void main (String[] args) {

        // Parte 2 -> Primitive

        // int
        int age = 22;

        // double
        double num = 22.5;

        // char -> usa ''
        char sex = 'M';

        // boolean
        boolean hasChild = false;
        boolean isOnline = false;
        boolean hasMoney = true;

        // output
        System.out.println("int -> " + age);
        System.out.println("double -> " + num);
        System.out.println("char -> " + sex);
        System.out.println("I Has child? -> " + hasChild);


        // condição if/else
        if(isOnline) {
            System.out.println("The user's on");
        } else {
            System.out.println("The user's off");
        }

        // ternario
        System.out.println((hasMoney) ? "I have Money" : "I dont have money");


        // Part 2 -> reference

        // string
        String nome = "Antonio Felix";

        System.out.println("String -> " + nome);


        // Array em js
        String[] names = {"Antonio", "José", "Felix"};
        System.out.println("Name 1. Sem loop: -> " + names[1]);

        // use loop to print in console
        System.out.println("Use loop");
        for(int i = 0; i < 3; i++) {
                System.out.println("Name " + i + ": -> " + names[i]);
        }

        // object


        System.out.println("Task...");

        int gta = 6;
        double pi = 3.14159;
        char gender = 'M';
        boolean isAdmin = false;

        System.out.println("My name is " + nome + " " +
                "I waiting for gta " + gta
                + ". I know that pi is equal to " + pi +
                " Also, gender is " + gender + ". Im admin ? " + isAdmin);

    }
}
