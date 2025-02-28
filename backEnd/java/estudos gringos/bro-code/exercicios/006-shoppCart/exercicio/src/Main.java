import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("What item would you like to buy?: ");
        String product = scanner.nextLine();

        System.out.print("What is the price for each?: ");
        double price = scanner.nextDouble();

        System.out.print("How many would you like?: ");
        int quant = scanner.nextInt();

        System.out.println("\nYou have bought " + quant + " " + product + "(s)");
        System.out.println("Your total is R$" + price * quant);


        scanner.close();
    }
}
