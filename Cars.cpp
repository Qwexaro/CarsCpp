#include <iostream> 
#include <vector> 
#include <string>

class Cars
{
    std::string mark, country_of_origin;
    int mileage, year_of_release, power;

public:
    void changeCars()
    {
        std::cout << "Введи пробег авто: "; std::cin >> mileage;
        std::cout << "Введи марку: "; std::cin >> mark;
        std::cout << "Введи страну производитель: "; std::cin >> country_of_origin;
        std::cout << "Введи мощность авто: "; std::cin >> power;
        std::cout << "Введи дату выпуска авто: "; std::cin >> year_of_release;
    }

    void writeCars()
    {
        std::cout << "Марка: " << mark << "\nПробег: " << mileage << "\nСтрана производитель: " << country_of_origin
            << "\nМощность: " << power << "\nДата выпуска: " << year_of_release << std::endl;
    }

    int getYearOfRelease()
    {
        return year_of_release;
    }

};

void yearCarsSort(std::vector<Cars>& vect)
{
    for (int i = 0; i < vect.size() - 1; i++)
    {
        for (int j = 0; j < vect.size() - i - 1; j++)
        {
            if (vect[j].getYearOfRelease() > vect[j + 1].getYearOfRelease())
            {
                std::swap(vect[j], vect[j + 1]);
            }
        }
    }
}

int main()
{
    system("chcp 1251");
    int count_cars = 0;
    std::cout << "Введи количество авто: ";  std::cin >> count_cars;
    std::vector<Cars>vect(count_cars);

    for (int i = 0; i < vect.size(); i++)
    {
        vect.at(i).changeCars();
        for (int i = 0; i < 100; i++) std::cout << "-"; std::cout << "\n";
    }

    system("cls");

    yearCarsSort(vect);

    for (int i = 0; i < vect.size(); i++)
    {
        vect.at(i).writeCars();
        for (int i = 0; i < 100; i++) std::cout << "-"; std::cout << "\n";
    }

    return 0;
}
