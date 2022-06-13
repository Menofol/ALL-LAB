package funcional;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class Delete {
    public static void delete() {  // Видалення пропуску
        // сделать выбор между файлами Letter и Speech
        Scanner scanner = new Scanner(System.in);
        System.out.println("\nВиберіть файл для видалення пропуска:");
        System.out.println("1 - Файл Letter");
        System.out.println("2 - Файл Speech");
        int choice = scanner.nextInt();
        switch (choice) {
            case 1:
                deleteLetter();
                break;
            case 2:
                deleteSpeech();
                break;
        }
    }
    public static void deleteLetter() { // Видалення пропуску з файлу Letter
        String fileName = "Letters.txt"; // назва файлу
        Scanner scanner = new Scanner(System.in); // введення даних
        System.out.print("Введіть прізвище письменика: ");
        String getStudentName = scanner.nextLine(); // прізвище студента
        String fileContent = ""; // вміст файлу
        try (Scanner search = new Scanner(new FileReader(fileName))) { // введення даних з файлу
            while (search.hasNextLine()) { // перевірка на наявність даних в файлі
                String line = search.nextLine(); // введення даних з файлу
                String[] index = line.split(" "); // відділення даних з файлу

                if (!index[2].equals(getStudentName)) { // перевірка на відповідність прізвища студента
                    fileContent += line + "\n";
                }
            }
        } catch (IOException e) {
            System.out.println("Помилка при читанні файлу");
        }
        try (FileWriter writer = new FileWriter(fileName, false)) {
            writer.write(fileContent);
        } catch (IOException e) {
            System.out.println("Помилка при записі в файл");
        }
        System.out.println("\tСтудент видалений");
        Show.show();
    }
    public static void deleteSpeech() { // Видалення пропуску з файлу Speech
        String fileName = "Speechs.txt"; // назва файлу
        Scanner scanner = new Scanner(System.in); // введення даних
        System.out.print("Введіть прізвище письменика: ");
        String getStudentName = scanner.nextLine(); // прізвище студента
        String fileContent = ""; // вміст файлу
        try (Scanner search = new Scanner(new FileReader(fileName))) { // введення даних з файлу
            while (search.hasNextLine()) { // перевірка на наявність даних в файлі
                String line = search.nextLine(); // введення даних з файлу
                String[] index = line.split(" "); // відділення даних з файлу

                if (!index[2].equals(getStudentName)) { // перевірка на відповідність прізвища студента
                    fileContent += line + "\n";
                }
            }
        } catch (IOException e) {
            System.out.println("Помилка при читанні файлу");
        }
    }
}