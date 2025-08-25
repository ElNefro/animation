#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>



void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


void MainMenu();
void ColorSentings();
void Animation();
int Run();

int choise;
std::string cmd;

int main()
{
    setlocale(LC_ALL, "ru");

    

    MainMenu();
}

void Animation()
{
    do
    {
        system("cls");
        std::cout << "\n\n\n\n \t\t\t\t\t\tВыберите стандартную анимацию\n\n";
        std::cout << "\t\t\t\t\t1) batman \n";
        std::cout << "\t\t\t\t\t2) can-you-hear-me \n";
        std::cout << "\t\t\t\t\t3) hes \n";
        std::cout << "\t\t\t\t\t4) knot \n";
        std::cout << "\t\t\t\t\t5) bnr \n";
        std::cout << "\t\t\t\t\t6) coin \n";
        std::cout << "\t\t\t\t\t7) donut \n";
        std::cout << "\t\t\t\t\t8) parrot \n";
        std::cout << "\t\t\t\t\t9) spidyswing \n";
        std::cout << "\t\t\t\t\t10) dvd \n";
        std::cout << "\t\t\t\t\t11) playstation \n";
        std::cout << "\t\t\t\t\t12) batman-running \n";
        std::cout << "\t\t\t\t\t13) clock \n";
        std::cout << "\t\t\t\t\t14) forrest \n";
        std::cout << "\t\t\t\t\t15) nyan \n";
        std::cout << "\t\t\t\t\t16) rick \n";
        std::cout << "\t\t\t\t\t17) torus-knot \n\n";
        std::cout << "\t\t\t\t\t0) Выход \n\n";
        std::cout << "\t\t\t\t\tВвод:";

        std::cin >> choise;

        if (choise == 1)
        {
            cmd = "cmd.exe /C curl ascii.live/batman";
        }
        else if (choise == 2)
        {
            cmd = "cmd.exe /C curl ascii.live/can-you-hear-me";
        }
        else if (choise == 3)
        {
            cmd = "cmd.exe /C curl ascii.live/hes";
        }
        else if (choise == 4)
        {
            cmd = "cmd.exe /C curl ascii.live/knot";
        }
        else if (choise == 5)
        {
            cmd = "cmd.exe /C curl ascii.live/bnr";
        }
        else if (choise == 6)
        {
            cmd = "cmd.exe /C curl ascii.live/coin";
        }
        else if (choise == 7)
        {
            cmd = "cmd.exe /C curl ascii.live/donut";
        }
        else if (choise == 8)
        {
            cmd = "cmd.exe /C curl ascii.live/parrot";
        }
        else if (choise == 9)
        {
            cmd = "cmd.exe /C curl ascii.live/spidyswing";
        }
        else if (choise == 10)
        {
            cmd = "cmd.exe /C curl ascii.live/dvd";
        }
        else if (choise == 11)
        {
            cmd = "cmd.exe /C curl ascii.live/playstation";
        }
        else if (choise == 12)
        {
            cmd = "cmd.exe /C curl ascii.live/batman-running";
        }
        else if (choise == 13)
        {
            cmd = "cmd.exe /C curl ascii.live/clock";
        }
        else if (choise == 14)
        {
            cmd = "cmd.exe /C curl ascii.live/forrest";
        }
        else if (choise == 15)
        {
            cmd = "cmd.exe /C curl ascii.live/nyan";
        }
        else if (choise == 16)
        {
            cmd = "cmd.exe /C curl ascii.live/rick";
        }
        else if (choise == 17)
        {
            cmd = "cmd.exe /C curl ascii.live/torus-knot";
        }
        else if (choise == 0)
        {
            MainMenu();
        }
        else
        {
            system("cls");
            std::cout << "\n\n\n\n \t\t\t\t\tERR!!!!!! \n\n";
            system("pause");
            continue;
        }
    } while (choise == NULL);

    Run();
    
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
        std::cout << "\t\t\t\t\t4) По умолчанию \n\n";
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

int Run()
{
  
    int ret = std::system(cmd.c_str());
    return ret;
 
}
