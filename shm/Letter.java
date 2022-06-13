package shm;

public class Letter {
    private String name;
    private String language;
    private String books;
    public String getName() { // отримання даних про прізвище
        return name;
    }
    public void setName(String name) { // встановлення даних про прізвище
            this.name = name;
    }
    public String getLanguage() { // отримання даних про групу
        return language;
    }
    public void setLanguage(String language) { // встановлення даних про групу
            this.language = language;
    }
    public String getBooks() { // отримання даних про курс
        return books;
    }
    public void setBooks(String books) { // встановлення даних про курс
            this.books = books;
    }
}