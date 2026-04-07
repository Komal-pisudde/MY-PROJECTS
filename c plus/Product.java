import java.util.Scanner;

class Product {
    public static void main(String[] args) {

        int a, b;

        Scanner obj = new Scanner(System.in);

        System.out.println("Enter any two numbers:");
        a = obj.nextInt();
        b = obj.nextInt();

        System.out.println("Product of two digits: " + (a * b));
    }
}