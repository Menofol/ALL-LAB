package funcional;

import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
public class Sort {
    public static void sort() throws IOException {
        for (int i = 0; i < 3; i++) {
            System.out.print("\n\tMenu Short\n"
                    + "1 - Відсортувати номеры\n"
                    + "2 - Список студентів\n"
                    + "0 - Повернутись до головного меню"
                    + "\n\nYour choise: ");
            Scanner scanner = new Scanner(System.in);
            int menu = scanner.nextInt();
            switch (menu) {
                case 1:
                    i = 1;
                    // Відсортувати студентів 1 до n за номером
                    List<String> students = new ArrayList<>(); // Створюємо масив для студентів
                    try (BufferedReader br = new BufferedReader(new FileReader("Letters.txt"))) { // Відкриваємо файл
                        String line; // Створюємо змінну для рядка
                        while ((line = br.readLine()) != null) { // Проходимо по файлу
                            students.add(line); // Додаємо рядок в масив
                        }
                    }
                    Collections.sort(students); // Сортуємо масив
                    try (BufferedWriter bw = new BufferedWriter(new FileWriter("Letters.txt"))) { // Відкриваємо файл
                        for (String s : students) { // Проходимо по масиву
                            bw.write(s); // Записуємо в файл
                            bw.newLine(); // Переходимо на новий рядок
                        }
                    }
                    System.out.println("\tСтуденти після суртування: ");
                    Show.show(); // Виводимо студентів
                    break;
                case 2:
                    i = 1;
                    Show.show(); // Виводимо студентів
                break;
                case 0:
                    i = 3;
                break;
                default:
                    System.out.println("Невірний пункт меню");
                    break;
            }
        }
    }
}