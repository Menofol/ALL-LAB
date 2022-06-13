package Temp;

import funcional.Delete;
import funcional.Search;
import funcional.Show;
import funcional.Sort;
import shm.Letter;

import java.io.*;
import java.util.Scanner;
public class Iopm {
    Letter student = new Letter(); // об'єкт класу Student
    public static void menu() throws IOException { // меню
        Iopm pass = new Iopm(); // створюємо об'єкт класу Pass
        Scanner scanner = new Scanner(System.in); // створюємо об'єкт класу Scanner
        for (int i = 0; i < 3; i++) { // цикл для повторення меню

            System.out.print("\n\tMenu Letters\n" // вивід меню
                    + "1 - Додати письменика\n"
                    + "2 - Вивести всіх письмеників\n"
                    + "3 - Видалення письменика\n"
                    + "4 - Відсортувати\n"
                    + "5 - Пошук\n"
                    + "0 - Повернутися до головного меню\n"
                    + "\nYour choise: ");
            int choice = scanner.nextInt(); // введення вибору користувача
            switch (choice) {
                case 1:
                    i = 1;
                    pass.addPass(); // виклик меню додавання пропуска
                    break;
                case 2:
                    i = 1;
                    Show.show(); // вивід всіх пропусків
                    break;
                case 0:
                    i = 3;
                    System.out.println("\nВертаємось в головне меню");
                    break;
                case 3:
                    i = 1;
                    Show.show(); // вивід всіх пропусків
                    Delete.delete(); // виклик меню видалення пропуска
                    break;
                case 4:
                    i = 1;
                    Sort.sort(); // виклик меню сортування
                    break;
                case 5:
                    i = 1;
                    Show.show(); // вивід всіх пропусків
                    Search.search(); // виклик меню пошуку
                    break;
                default:
                    i = 1;
                    System.out.println("Неверный выбор");
                    break;
            }
        }
    }
    private void addPass() { // додавання пропуска
        System.out.print("Введіть письменика(ФІ): ");
        Scanner scanner = new Scanner(System.in);
        String studentName = scanner.nextLine();
        student.setName(studentName);
        System.out.print("Мова: ");
        String language = scanner.nextLine();
        student.setLanguage(language);
        System.out.print("Кількість книжок: ");
        String books = scanner.nextLine();
        student.setBooks(books);

        int previusID = 0; // поле для збереження попереднього ID
        StringBuffer sb=new StringBuffer(); // створюємо об'єкт класу StringBuffer
        try // перевірка на відсутність файлу
        {
            BufferedReader br=new BufferedReader(new FileReader("Letters.txt")); // читаємо файл
            String s=""; // змінна для зберігання рядка з файлу
            while((s=br.readLine())!=null) // поки не досягнемо кінця файлу
            {
                String data[] = new String[7]; // масив для зберігання даних з файлу
                data = s.split(","); // розділяємо рядок за пробілом або комою, можно змінити на інший символ
                previusID = Integer.parseInt (data[0]); // перетворюємо строку в число
            }}
        catch(Exception ignored) {// при виникненні помилки просто пропускаємо її
        }
        if(previusID>0) { // перевіряємо чи є інформація в файлі
            previusID=previusID+1; // збільшуємо на 1 значення з файлу
        }
        else{
            previusID=1; // якщо немає значення в файлі, то присвоюємо 1
        }
        try {
            FileWriter fileWriter = new FileWriter("Letters.txt", true); // записуємо дані в файл
            fileWriter.write("" + previusID + ", "); // записуємо попередній ID
            fileWriter.write("Письменик: " + student.getName() + " | " ); // записуємо дані про студента
            fileWriter.write("Мова: " + student.getLanguage() + " | "); // записуємо дані про мову
            fileWriter.write("Кількість книжок: " + student.getBooks()); // записуємо дані про кількість книжок
            fileWriter.write("\n"); // перехід на новий рядок
            fileWriter.close(); // закриваємо потік
        } catch (IOException e) {
            throw new RuntimeException(e); // повертаємо помилку
        }
    }
}
