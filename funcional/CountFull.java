package funcional;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class CountFull {

    public static void count() {
        try {
            FileReader fileReader = new FileReader("Letters.txt");
            Scanner scanner = new Scanner(fileReader);
            int count = 0;
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                count += line.length();
            }
            System.out.println("Кількість символів: " + count + "\n");
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        }
    }



}
