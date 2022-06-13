package funcional;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Summarycountlist {

    public static void summarycountlist() {
        try {
            FileReader fileReader = new FileReader("Speechs.txt");
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            String line;
            int sum = 0;
            while ((line = bufferedReader.readLine()) != null) {
                String[] words = line.split(" ");
                for (int i = 0; i < words.length; i++) {
                    if (words[i].equals("Cлухачів:")) {
                        sum += Integer.parseInt(words[i + 1]);
                    }
                }
            }
            bufferedReader.close();
            int total = sum;
            System.out.print("\nВсього слухачів: " + total + "\n");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
