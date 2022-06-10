package temp;

public class Student {
    private String name;
    private String estimate;
    private String subject;
    public String getName() { // отримання даних про прізвище
        return name;
    }
    public void setName(String name) { // встановлення даних про прізвище
            this.name = name;
    }
    public String getEstimate() { // отримання даних про групу
        return estimate;
    }
    public void setEstimate(String estimate) { // встановлення даних про групу
            this.estimate = estimate;
    }
    public String getSubject() { // отримання даних про курс
        return subject;
    }
    public void setSubject(String subject) { // встановлення даних про курс
            this.subject = subject;
    }
}