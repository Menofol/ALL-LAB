package Temp;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class labSecond_2 {
    public static void main(String[] args) throws IOException {
        try (BufferedReader reader = new BufferedReader(new FileReader("I:\\Other\\Doc and lessons\\all\\111.txt"))) {
            String[] numbers = new String[1024];

            for (int i = 0; i < numbers.length; i++) {
                numbers[i] = new String();
            }
            int count = 0, summ = 0;
            String buff = new String();

            buff = reader.readLine();

            for (int i = 0; i < buff.length(); i++) {
                if (buff.charAt(i) == ' ') {
                    count++;
                } else {
                    numbers[count] += buff.charAt(i);
                }
            }

            for (int i = 0; i < numbers.length; i++) {
                if (!numbers[i].isEmpty()) {
                    summ += Integer.parseInt(numbers[i]);
                }
            }

            System.out.print('\n' + "Suma = " + summ);
        }
    }
}