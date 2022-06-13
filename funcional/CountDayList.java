package funcional;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class CountDayList {
    public static void daylowest() {
        try {
            FileReader fileReader = new FileReader("Speechs.txt");
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            String line;
            int lowest = 0;
            while ((line = bufferedReader.readLine()) != null) {
                String[] words = line.split(" ");
                for (int i = 0; i < words.length; i++) {
                    if (words[i].equals("Cлухачів:")) {
                        lowest = Integer.parseInt(words[i + 1]);
                    }
                }
            }
            bufferedReader.close();
            System.out.print("\nМінімальна кількість слухачів: " + lowest + "\n");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
