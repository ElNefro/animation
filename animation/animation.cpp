#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>


void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
void sleep_ms(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void MainMenu();
void ColorSentings();
void Animation();

int choise;

int main()
{
    setlocale(LC_ALL, "ru");

    MainMenu();
}

void Animation()
{
    // Узкий curl, состоящий из набора точек, которые постепенно рисуют форму
    const int width = 50;
    const int height = 10;
    const int frames = 60;
    const int delay_ms = 50;

    // Функция печати кадра curl: здесь будем просто выводить символы в разных позициях
    for (int f = 0; f < frames; ++f) {
        // Очистка экрана
        // ANSI ESC[2J — очистка экрана
        // ESC[H — перемещение курсора в начало
        std::cout << "\033[2J\033[H";

        // Рисуем curl-подобную фигуру из небольших точек по мере движения
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                // Простейшая формула curl-подобного паттерна: орнамент в виде завитка
                int cx = (x + f) % width;
                int cy = (y + f / 2) % height;

                // Небольшой момент: отрисовываем точку, если условие выполнено
                if ((cx * cy + f) % 7 == 0) {
                    std::cout << "*";
                }
                else {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }

        // Переход к следующему кадру
        std::cout.flush();
        sleep_ms(delay_ms);
    }

    // Финальный вывод
    std::cout << "\033[0m"; // сброс стилей
    std::cout << std::endl;
}

void MainMenu()
{

	do
	{
        system("cls");

        std::cout << "\n\n\n\n \t\t\t\t\t\t Анимации \n\n";

        std::cout << "\t\t\t\t\t 1) запустить анимацию \n";
        std::cout << "\t\t\t\t\t 2) Настройка цвета \n";
        std::cout << "\t\t\t\t\t 0) Выйти \n\n";

        std::cout << "\t\t\t\t\tВвод: ";

        std::cin >> choise;

        if (choise == 1)
        {
            Animation();
        }

        else if (choise == 2)
        {
            ColorSentings();
        }

        else if (choise == 0)
        {
            system("cls");

            std::cout << "\n\n\n\n \t\t\t\t\tВы уверены, что хотите выйти?\n\n";
            std::cout << "\t\t\t\t\t1) Да\n";
            std::cout << "\t\t\t\t\t2) Нет\n\n";

            std::cout << "\t\t\t\t\tВвод: ";

            std::cin >> choise;

            if (choise == 1)
            {
                system("cls");
                std::cout << "\n\n\n\n \t\t\t\t\tЗаходите еще)\n\n\n\n";
                break;
            }
            else if (choise == 2)
            {
                continue;
            }
            else
            {
                system("cls");
                std::cout << "\n\n\n\n \t\t\t\t\tERR!!!!\n\n";
                system("pause");
                continue;
            }
        }
        else
        {
            system("cls");
            std::cout << "\n\n\n\n \t\t\t\t\tERR!!!!!! \n\n"; 
            system("pause");
            continue;
        }

	} while (true);
}

void ColorSentings()
{
    do
    {
        system("cls");

        std::cout << "\n\n\n\n \t\t\t\t\tВыберите цвет текста\n\n";
        std::cout << "\t\t\t\t\t1) Красный \n";
        std::cout << "\t\t\t\t\t2) Зеленый \n";
        std::cout << "\t\t\t\t\t3) Синий \n";
        std::cout << "\t\t\t\t\t4) По умолчанию \n";
        std::cout << "\t\t\t\t\t0) Выход \n\n";

        std::cout << "\t\t\t\t\tВвод: ";

        std::cin >> choise;

        if (choise == 1)
        {
            setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
        }
        else if (choise == 2)
        {
            setColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        }
        else if (choise == 3)
        {
            setColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        }
        else if (choise == 4)
        {
            setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        else if (choise == 0)
        {
            break;
        }
        else
        {
            system("cls");
            std::cout << "\n\n\n\n \t\t\t\t\tERR!!!!\n\n";
            system("pause");
            continue;
        }
    } while (true);

    MainMenu();
}