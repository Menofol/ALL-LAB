package temp;

import java.io.*;
import java.util.Scanner;
public class Succes {
    public static void main (String[] args) throws IOException {
        menu();
    }
    Student student = new Student();
    public static void menu() {
        Succes pass = new Succes();
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {

            System.out.print("\n\tMenu Succes\n"
                    + "1 - Додати успішність\n"
                    + "2 - Вивести всі успішності\n"
                    + "3 - Середній балл по предмету\n"
                    + "0 - Вихід\n"
                    + "\nYour choise: ");
            int choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    i = 1;
                    pass.addSuccess();
                    break;
                case 2:
                    i = 1;
                    showSuccess();
                    break;
                case 3:
                    i = 1;
                    average();
                    break;
                case 0:
                    i = 3;
                    System.out.println("\tДо побачення!");
                    break;
                default:
                    i = 1;
                    System.out.println("Неверный выбор");
                    break;
            }
        }
    }
    private void addSuccess() {
        System.out.print("Введіть студента(ФІ): ");
        Scanner scanner = new Scanner(System.in);
        String studentName = scanner.nextLine();
        student.setName(studentName);
        System.out.print("Введіть оцінку: ");
        String studentEstimate = scanner.nextLine();
        student.setEstimate(studentEstimate);
        System.out.print("Введіть предмет: ");
        String studentSubject = scanner.nextLine();
        student.setSubject(studentSubject);
        // сохранение данных в текстовый файл Success.txt

        try {
            FileWriter fileWriter = new FileWriter("Success.txt", true);
            fileWriter.write("Студент: " + student.getName() + " | " );
            fileWriter.write("Оцінка: " + student.getEstimate() + " | ");
            fileWriter.write("Предмет: " + student.getSubject() + "\n");
            fileWriter.close();

        } catch (IOException e) {
            throw new RuntimeException(e); // повертаємо помилку
        }
    }
    // виведення данних з файлу Success.txt
    public static void showSuccess() {
        try {
            FileReader fileReader = new FileReader("Success.txt");
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }
            bufferedReader.close();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
    // арифметическое число всех оценок
    public static void average() {
        try {
            FileReader fileReader = new FileReader("Success.txt");
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            String line;
            float sum = 0;
            float count = 0;
            while ((line = bufferedReader.readLine()) != null) {
                String[] words = line.split(" ");
                for (int i = 0; i < words.length; i++) {
                    if (words[i].equals("Оцінка:")) {
                        sum += Integer.parseInt(words[i + 1]);
                        count++;
                    }
                }
            }
            bufferedReader.close();
            float average = sum / count;
            System.out.printf("\nСередній балл по ООП: %.2f\n", average);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }








}
