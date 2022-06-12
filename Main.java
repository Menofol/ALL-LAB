package Temp;

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            for (int i = 0; i < 3; i++) {
                String answer;
                Scanner scan = new Scanner(System.in);
                System.out.println("1 - First Lab Ex.1\n2 - First Lab Ex.2\n3 - exit: ");
                answer = scan.next();//for String Input
                switch (answer) {
                    case "2":
                        labFirst_2.second();
                        i = 1;
                        break;
                    case "1":
                        labFirst_1.first();
                        i = 1;
                        break;
                    case "3":
                        break;
                    default:
                }
            }
        }
    }
}

