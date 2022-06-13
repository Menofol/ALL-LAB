package funcional;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Sharing {
    public static void show() { // Вивід даних з файлу
        try (BufferedReader reader = new BufferedReader(new FileReader("Speechs.txt"))) { // введення даних з файлу
            String line;
            while ((line = reader.readLine()) != null) { // проходимо по файлу
                System.out.println(line); // виводимо дані з файлу
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
