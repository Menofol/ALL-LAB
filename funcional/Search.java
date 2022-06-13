package funcional;

import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
public class Search {
    public static void search() { // Пошук по даті
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nВведіть дату пропуску: ");
        String name = scanner.nextLine();
        try {
            FileReader fileReader = new FileReader("Letters.txt"); // введення даних з файлу
            Scanner scanner1 = new Scanner(fileReader);
            while (scanner1.hasNextLine()) {
                String line = scanner1.nextLine();
                if (line.contains(name)) { // перевірка на відповідність дати
                    System.out.println(line); // виводимо дані з файлу
                }
            }
        }
        catch (IOException e) {
            System.out.println("Помилка введення-виведення");
        }
    }
    public static String count(int group) { // Пошук по групі
        String count = ""; // кількість груп
        try { // перевірка на введення правильної групи
            FileReader fileReader = new FileReader("Letters.txt"); // введення даних з файлу
            Scanner scanner = new Scanner(fileReader);
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine(); // введення даних з файлу
                if (line.contains(Integer.toString(group))) { // перевірка на наявність даних в файлі
                    count += line + "\n"; // додавання даних в стрічку
                }
            }
        }
        catch (IOException e) {
            System.out.println("Помилка введення-виведення"); // виведення помилки
        }
        return count; // повертання кількості пропусків в групі
    }
}
