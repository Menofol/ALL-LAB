package Temp;

import java.util.Scanner;

public class labFirst_2 {
    public static void second() {
        double a, b, x, h;
        int v;
        Scanner in = new Scanner(System.in);
        a = 1.25;
        b = 6.75;
        h = 0.25;
        do {

            System.out.print("\tMenu: \n" +
                    "1 - With while\n" + "2 - With do while\n" + "3- Exit\n" + "Your input: ");
            v = in.nextInt();
            double y = 0;
            if (v == 1) {
                x = a;
                System.out.print("\tx\t\t\t\ty=f(x)\n");
                while (x <= b) {
                    System.out.printf("%.2f\t\t\t\t%.2f\n", x, y);
                    x += h;
                    y = (Math.sqrt(Math.pow(x, 3)));
                }
            }
            if (v == 2) {
                x = a;
                System.out.print("\tx\t\t\t\ty=f(x)\n");
                do {
                    System.out.printf("%.2f\t\t\t\t%.2f\n", x, y);
                    x += h;
                    y = (Math.log(x)) / (4 * x) + 13;
                } while (x <= b);
            }
        } while (v != 3);
    }
}
