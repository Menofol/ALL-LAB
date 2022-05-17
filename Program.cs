using System.Collections;
namespace Umi
{
    class Program
    {
        public static ArrayList ReadFromFile(string path)
        {
            ArrayList list = new ArrayList();
            string line;
            StreamReader reader = File.OpenText(path);
            while ((line = reader.ReadLine()) != null)
            {
                string[] s = line.Split(new string[]
                {
                    "Прiзвище: ", ", Номер будинку: ", ", Номер квартири: ", ", Стать: ", ", Сума боргу: "
                }, 5, StringSplitOptions.RemoveEmptyEntries);
                list.Add(new Owner(s[0], int.Parse(s[1]), int.Parse(s[2]), s[3], int.Parse(s[4])));
            }
            reader.Close();
            return list;
        }
        // method for editing record
        public static Owner Edit(Owner owner)
        {
            Console.WriteLine("\nЯке поле ви хочете редагувати?\n\n" + "Прізвище - 1\n" + "Номер будинку - 2\n" + "Номер квартири - 3\n" + "Стать - 4\n" + "Сума боргу - 5\n" + "Вийти - 6");
            Console.Write("\nВаш вибiр: ");
            int localNum = int.Parse(Console.ReadLine());
            Console.Write("\n");
            Console.Write("Введiть нове значення: ");
            switch (localNum)
            {
                case 1:
                    owner.Surname = Console.ReadLine(); break;
                case 2:
                    int numberedit = int.Parse(Console.ReadLine());
                    if (numberedit < 1 || numberedit > 100)
                    {
                        Console.Write("\nНомера будинку может бути лише від 1 до 100 \n"); break;
                    }
                    else
                    {
                        owner.Number = numberedit; break;
                    }
                case 3:
                    int appartmentedit = int.Parse(Console.ReadLine());
                    if (appartmentedit < 0 || appartmentedit > 200)
                    {
                        Console.Write("\nНомер квартири може бути лише від 0 до 200\n"); break;
                    }
                    else
                    {
                        owner.Apartments = appartmentedit; break;
                    }
                case 4:
                    string sexedit = Console.ReadLine();
                        owner.Sex = sexedit; break;
                case 5:
                    int deptedit = int.Parse(Console.ReadLine());
                    if (deptedit < 0 || deptedit > 50000)
                    {
                        Console.Write("\nСума боргу не может бути більше 50000 і меньше за 0\n"); break;
                    }
                    else
                    {
                        owner.Dept = deptedit; break;
                    }
                case 6: break;
            }
            return owner;
        }
        public static void Write(string path, ArrayList owners)
        {
            StreamWriter streamWriter;
            streamWriter = File.CreateText(path);
            foreach (Owner n in owners)
            {
                streamWriter.WriteLine(n);
            }
            streamWriter.Close();
        }
        static void Main(string[] args)
        {
            string path = "I:\\database.txt";
            ArrayList owners = new ArrayList(new Owner[] { });
            while (true)
            {
                Console.WriteLine("\n\tМеню\n\n" + "Додати запис - 1\n" + "Редагувати запис - 2\n" + "Видалити запис - 3\n" + "Вивести усi записи - 4\n" + "Пошук за номером будинку - 5\n" + "Вийти - 6");
                try
                {
                    bool breakFlag = false;
                    int a;
                    Console.Write("\nВаш вибiр: ");
                    int choice = int.Parse(Console.ReadLine());
                    Console.Write("\n");
                    switch (choice)
                    {
                        // code for adding record
                        case 1:
                            Console.Write("Прiзвище: ");
                            string surname = Console.ReadLine();
                            Console.Write("Номер будинку: ");
                            int number = int.Parse(Console.ReadLine());
                            if (number < 1 || number > 100)
                            {
                                Console.Write("\nНомера будинку может бути лише від 1 до 100 \n"); break;
                            }
                            Console.Write("Номер квартири: ");
                            int appartments = int.Parse(Console.ReadLine());
                            if (appartments < 0 || appartments > 200)
                            {
                                Console.Write("\nНомер квартири може бути лише від 0 до 200\n"); break;
                            }
                            Console.Write("Стать: ");
                            string sex = Console.ReadLine();
                            Console.Write("Сума боргу: ");
                            int dept = int.Parse(Console.ReadLine());
                            if (dept < 0 || dept > 50000)
                            {
                                Console.Write("\nСума боргу не может бути більше 50000 і меньше за 0\n"); break;
                            }
                            owners = ReadFromFile(path);
                            Owner owner = new Owner(surname, number, appartments, sex, dept);
                            owners.Add(owner);
                            Write(path, owners);
                            break;
                        // code for choosing record for editing 
                        case 2:
                            owners = ReadFromFile(path);
                            Console.WriteLine("Виберіть для редактування:\n");
                            a = 1;
                            owners.Sort();
                            for (int i = 0; i < owners.Count; i++)
                            {
                                a++;
                                Owner n = (Owner)owners[i];
                                Console.WriteLine($"{i + 1} - Прiзвище: {n.Surname}, Номер будинку: {n.Number}, Номер квартири: {n.Apartments}, Стать: {n.Sex}, Сума боргу: {n.Dept}");
                            }
                            Console.WriteLine($"{a} - Вийти");
                            Console.Write("\nВаш вибiр: ");
                            int editChoice = int.Parse(Console.ReadLine());
                            if (editChoice == a)
                                break;
                            owners[editChoice - 1] = Edit((Owner)owners[editChoice - 1]);
                            Write(path, owners);
                            break;
                        // code for deleting record
                        case 3:
                            Console.WriteLine("Виберіть видалення:\n");
                            a = 1;
                            owners = ReadFromFile(path);
                            owners.Sort();
                            for (int i = 0; i < owners.Count; i++)
                            {
                                a++;
                                Owner n = (Owner)owners[i];
                                Console.WriteLine($"{i + 1} - Прiзвище: {n.Surname}, Номер будинку: {n.Number}, Номер квартири: {n.Apartments}, Стать: {n.Sex}, Сума боргу: {n.Dept}");
                            }
                            Console.WriteLine($"{a} - Вийти");
                            Console.Write("\nВаш вибiр: ");
                            int deleteChoice = int.Parse(Console.ReadLine());
                            Console.Write("\n");
                            if (deleteChoice == a)
                                break;
                            owners.Remove(owners[deleteChoice - 1]);
                            Write(path, owners);
                            break;
                        // code for printing all records 
                        case 4:
                            owners = ReadFromFile(path);
                            owners.Sort();
                            foreach (Owner n in owners)
                            {
                                Console.WriteLine($"Прiзвище: {n.Surname}, Номер будинку: {n.Number}, Номер квартири: {n.Apartments}, Стать: {n.Sex}, Сума боргу: {n.Dept}");
                            }
                            Console.WriteLine("\n");
                            break;
                        // code for findind record by number of building
                        case 5:
                            int count = 0;
                            owners = ReadFromFile(path);
                            Console.Write("Введiть Номер будинку: ");
                            int groupnum = int.Parse(Console.ReadLine());
                            Console.Write("\n");
                            foreach (Owner n in owners)
                            {
                                if (n.Number.Equals(groupnum))
                                {
                                    Console.WriteLine(n);
                                    count++;
                                }
                            }
                            if (count == 0)
                            {
                                Console.Write("Власника з таким номером будинка немає \n");
                            }
                            break;
                        case 6:
                            breakFlag = true;
                            break;
                        default:
                            continue;
                    }
                    if (breakFlag)
                        break;
                }
                catch (FormatException)
                {
                    Console.WriteLine("\nПриймаю тілько цифри...\n");
                }
            }
        }
    }
}