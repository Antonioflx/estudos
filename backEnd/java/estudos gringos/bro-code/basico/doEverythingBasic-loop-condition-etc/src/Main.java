public class Main {

    public static void main(String[] args) {
        // 1 parte condição

        boolean isStudent = true;
        boolean isOld = false;
        if(isStudent) {
            System.out.println("I'm Student");
        }

        // nested

        if(isOld) {
            System.out.println("I'm old");
        } else {
            System.out.println("I'm not old");
        }

        /*
            operadores lógicos
            &&
            ||
            !
         */

        if(isOld && isStudent) { // false
            System.out.println("I'm Student and Old");
        }

        if(isOld || isStudent) { // true
            System.out.println("I'm Student or old");
        }

        if(!isOld) {
            System.out.println("I'm not old");
        }

        int num1 = 5;
        // operador ternário
        System.out.println("Operador ternário -> " + (num1 > 10 ? "num1 é maior que 10" : "num1 é menor que 10 "));

        // switch
        int x = 8;
        switch(x) {

            case 9 :
                System.out.println("Numero 2: " + x);
                break;

            case 10 :
                System.out.println("Numero 1: " + x);
                break;

            default :
                System.out.println("ERROR");
                break;

        }

        // Uma forma de fazer
        int num = 8;
        String resultado = switch (num) {
            case 8 -> "O número é 8";
            case 7 -> "O número é 7";
            default -> "ERROR";
        };

        System.out.println(resultado);
        /*
            loop
            while
            do while
            for
         */

        int incremento = 0;

        while(incremento < 5) {
            System.out.println(incremento);
            incremento++;
        }

        do {
            System.out.println(incremento);
            incremento--;
        } while(incremento > 0);

        for(incremento = 0; incremento < 5; incremento++) {
            System.out.println(incremento);
        }

        // break & continue

        int teste;

        for(teste = 10; teste < 15; teste++) {
            if(teste == 12) {
                System.out.println("Chegou no num 12");
                continue;
            }

            if(teste == 14) {
                System.out.println("Chegou no num 14");
                break;
            }
            System.out.println(teste);
        }


        // nested Loops -> matriz

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                System.out.println(i + "," + j + " ");
            }
        }
    }
}
