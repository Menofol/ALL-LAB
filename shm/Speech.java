package shm;

public class Speech {

    private String data;
    private String place;
    private String countview;

    public String getData() { // отримання даних про прізвище
        return data;
    }
    public void setData(String data) { // встановлення даних про прізвище
        this.data = data;
    }
    public String getPlace() { // отримання даних про групу
        return place;
    }
    public void setPlace(String place) { // встановлення даних про групу
        this.place = place;
    }
    public String getCountview() { // отримання даних про курс
        return countview;
    }
    public void setCountview(String countview) { // встановлення даних про курс
        this.countview = countview;
    }

}
