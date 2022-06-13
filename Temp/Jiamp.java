package Temp;

import funcional.*;
import shm.Letter;
import shm.Speech;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Jiamp {

    Speech student = new Speech(); // об'єкт класу Student
    public static void menu() throws IOException { // меню
        Jiamp pass = new Jiamp(); // створюємо об'єкт класу Pass
        Scanner scanner = new Scanner(System.in); // створюємо об'єкт класу Scanner
        for (int i = 0; i < 3; i++) { // цикл для повторення меню

            System.out.print("\n\tMenu Speechs\n" // вивід меню
                    + "1 - Додати виступ\n"
                    + "2 - Вивести всі виступи\n"
                    + "3 - Видалення виступу\n"
                    + "4 - Сумарна кількість слухачів\n"
                    + "5 - День з наймешною кількістю слухачів\n"
                    + "6 - Кількість символів в файлі\n"
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
                    Sharing.show(); // вивід всіх пропусків
                    break;
                case 0:
                    i = 3;
                    System.out.println("\nВертаємось в головне меню");
                    break;
                case 3:
                    i = 1;
                    Delete.delete(); // виклик меню видалення пропуска
                    break;
                case 4:
                    i = 1;
                    Summarycountlist.summarycountlist();
                    break;
                case 5:
                    i = 1;
                    CountDayList.daylowest();
                    break;
                case 6:
                    i = 1;
                    CountFull.count();
                    break;
                default:
                    i = 1;
                    System.out.println("Неверный выбор");
                    break;
            }
        }
    }
    private void addPass() { // додавання пропуска
        System.out.print("Дата виступу: ");
        Scanner scanner = new Scanner(System.in);
        String studentName = scanner.nextLine();
        student.setData(studentName);
        System.out.print("Місце: ");
        String language = scanner.nextLine();
        student.setPlace(language);
        System.out.print("Кількість слухачів: ");
        String books = scanner.nextLine();
        student.setCountview(books);

        int previusID = 0; // поле для збереження попереднього ID
        StringBuffer sb=new StringBuffer(); // створюємо об'єкт класу StringBuffer
        try // перевірка на відсутність файлу
        {
            BufferedReader br=new BufferedReader(new FileReader("Speechs.txt")); // читаємо файл
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
            FileWriter fileWriter = new FileWriter("Speechs.txt", true); // записуємо дані в файл
            fileWriter.write("" + previusID + ", "); // записуємо попередній ID
            fileWriter.write("Дата: " + student.getData() + " | " ); // записуємо дані про студента
            fileWriter.write("Місце: " + student.getPlace() + " | "); // записуємо дані про мову
            fileWriter.write("Cлухачів: " + student.getCountview()); // записуємо дані про кількість книжок
            fileWriter.write("\n"); // перехід на новий рядок
            fileWriter.close(); // закриваємо потік
        } catch (IOException e) {
            throw new RuntimeException(e); // повертаємо помилку
        }
    }
}
