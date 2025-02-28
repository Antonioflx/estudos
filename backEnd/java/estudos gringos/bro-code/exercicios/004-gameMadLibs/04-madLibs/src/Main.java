import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String adj_verb_noun, verb, noun;

        System.out.print("Enter an adjective (description) ");
        adj_verb_noun = scanner.nextLine();
        System.out.println("Today i went to a " + adj_verb_noun + " zoo.");
        System.out.print("Enter a noun (description) ");
        adj_verb_noun = scanner.nextLine();
        System.out.println("In an exhibit, I saw a " + adj_verb_noun + ".");

        noun = adj_verb_noun;

        System.out.print("Enter an adjective (description) ");
        adj_verb_noun = scanner.nextLine();

        System.out.print("Enter a verb (description) ");
        verb = scanner.nextLine();

        System.out.println(noun + " was " + adj_verb_noun + " and " + verb + "!");

        System.out.print("Enter an adjective (description) ");
        System.out.println("I was " + adj_verb_noun + "!");

        adj_verb_noun = scanner.nextLine();

    }

}
