package Temp;

import java.util.Scanner;

public class labSecond_1 {
    static final int SIZE = 26;
    static void EvenOddLength(int arr[], int n) {
        // Зберігати число
        int even = 0;

        for (int i = 0; i < n; i++) {

            // Перетворення цілого числа в рядок
            String x = Integer.toString(arr[i]);

            if (x.length() % 2 == 0)
                even++;
        }
        System.out.print("\nКількість парних довгих елементів = " + even
                + "\nКількість непарних довгих елементів = " + (n - even) + "\n");
    }
    static void printCharWithFreq(String str)
    {
        int n = str.length();

        // freq[] реалізовано як хеш-таблиця
        int[] freq = new int[SIZE];
        // накопичувати частоту кожного символу в 'str'
        for (int i = 0; i < n; i++)
            freq[str.charAt(i) - 'a']++;

        // обхід 'str' зліва направо
        for (int i = 0; i < n; i++) {

            if (freq[str.charAt(i) - 'a'] != 0) {
                // друкуємо символ разом з його частотою
                System.out.print(str.charAt(i));
                System.out.print(freq[str.charAt(i) - 'a'] + " ");
                // частота оновлення str.charAt(i) до 0, щоб не друкувати його знову
                freq[str.charAt(i) - 'a'] = 0;
            }
        }
    }
    public static void main(String[] args) { // головний метод
        int choice; // змінна для вибору пункту меню
        do {
            System.out.print("\n1 - Підраховує кількість слів, які мають парну/непарну довжину;\n"
                    + "2 - Виводить на екран частоту входження кожної літери;\n"
                    + "3 - Вихід"
                    + "\nВведіть номер задачі: ");
            choice = Integer.parseInt(new Scanner(System.in).nextLine());
            switch (choice) {
                case 1:
                    System.out.print("Введіть кількість чисел: ");
                    int n = Integer.parseInt(new Scanner(System.in).nextLine());
                    int[] arr = new int[n];
                    for (int i = 0; i < n; i++) {
                        System.out.print("Введіть число: ");
                        arr[i] = Integer.parseInt(new Scanner(System.in).nextLine());
                    }
                    EvenOddLength(arr, n);
                    break;
                case 2:
                    System.out.print("Введіть рядок: ");
                    String str = new Scanner(System.in).nextLine();
                    printCharWithFreq(str);
                    break;
                case 3:
                    break;
                default:
                    System.out.println("Невірний ввід");
            }
        } while (choice != 3);
    }
}

