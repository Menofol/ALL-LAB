
namespace Umi
{
    public class Owner : IComparable
    {

        private string surname;
        private int number;
        private int apartments;
        private string sex;
        private int dept;

        public override string ToString()
        {
            return $"Прiзвище: {surname}, Номер будинку: {number}, Номер квартири: {apartments}, Стать: {sex}, Сума боргу: {dept}";
        }
        
        public int CompareTo(object? obj)
        {
            Owner other = (Owner)obj;
            return Surname.CompareTo(other.Surname);
        }


        public Owner()
        {
        }

        public Owner(string surname, int number, int apartments, string sex, int dept)
        {
            Surname = surname;
            Number = number;
            Apartments = apartments;
            Sex = sex;
            Dept = dept;
        }

        public string Surname
        {
            get => surname;
            set => surname = value;
        }

        public int Number
        {
            get => number;
            set => number = value;
        }

        public int Apartments
        {
            get => apartments;
            set => apartments = value;
        }

        public string Sex
        {
            get => sex;
            set => sex = value;
        }

        public int Dept
        {
            get => dept;
            set => dept = value;
        }
    }
}