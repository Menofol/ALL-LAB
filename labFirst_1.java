package Temp;

import java.util.Scanner;
public class labFirst_1 {
    public static void first() {
        try (Scanner in = new Scanner(System.in)) {
            System.out.print("Введите любой номер: ");
            String choice = String.valueOf(in.nextInt());
            String nomberString;
            switch (choice) {
                case "10":
                    nomberString = "Десять";
                    break;
                case "11":
                    nomberString = "Одинадцять";
                    break;
                case "12":
                    nomberString = "Дванадцять";
                    break;
                case "13":
                    nomberString = "Тринадцять";
                    break;
                case "14":
                    nomberString = "Чотирнадцать";
                    break;
                case "15":
                    nomberString = "П'ятнадцать";
                    break;
                case "16":
                    nomberString = "Шістнадцать";
                    break;
                case "17":
                    nomberString = "Сімнадцать";
                    break;
                case "18":
                    nomberString = "Вісемнадцать";
                    break;
                case "19":
                    nomberString = "Девятнадцать";
                    break;
                case "20":
                    nomberString = "Двадцать";
                    break;
                default:
                    nomberString = "Не правильное значеня";
                    break;
            }
            System.out.println(nomberString);
        } catch (Exception exception) {
            System.out.println("Не вірно введене значення (Вводити можна лише цифри!)");
        }
    }
}