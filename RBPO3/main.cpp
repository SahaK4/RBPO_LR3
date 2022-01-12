#include <iostream>
#include <conio.h>
import BPZ1901.Kazina.Lab3.Task1;
import BPZ1901.Kazina.Lab3.Task2;
import BPZ1901.Kazina.Lab3.Task3;
import BPZ1901.Kazina.Lab3.Task4;
import BPZ1901.Kazina.Lab3.Task5;


int main()
{
	setlocale(LC_ALL, "ru");
	std::cout << "Меню:\n1 - задание 1\n2 - задание 2\n3 - задание 3\n4 - задание 4\n5 - задание 5" << std::endl;
	do
	{
		switch (_getch())
		{
		case '1':
		{
			std::cout << "Задача 1" << std::endl;
			double r1 = RBPO::Lab3::Task1::f1(3);
			double r21 = RBPO::Lab3::Task1::f2(8);
			double r22 = RBPO::Lab3::Task1::f2(10);
			double r3 = RBPO::Lab3::Task1::f3(6);
			double r4 = RBPO::Lab3::Task1::f4(0.01);
			std::cout << "Функция f1: " << r1 << std::endl;
			std::cout << "Функция f2 при x <= 9: " << r21 << std::endl;
			std::cout << "Функция f2 при x > 9: " << r22 << std::endl;
			std::cout << "Функция f3: " << r3 << std::endl;
			std::cout << "Функция f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '2':
		{
			std::cout << "Задача 2" << std::endl;
			double r1 = RBPO::Lab3::Task2::f1(3);
			double r21 = RBPO::Lab3::Task2::f2(8);
			double r22 = RBPO::Lab3::Task2::f2(10);
			double r3 = RBPO::Lab3::Task2::f3(6);
			double r4 = RBPO::Lab3::Task2::f4(0.01);
			std::cout << "Функция f1: " << r1 << std::endl;
			std::cout << "Функция f2 при x <= 9: " << r21 << std::endl;
			std::cout << "Функция f2 при x > 9: " << r22 << std::endl;
			std::cout << "Функция f3: " << r3 << std::endl;
			std::cout << "Функция f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '3':
		{
			std::cout << "Задача 3" << std::endl;
			double r1 = RBPO::Lab3::Task3::f1(3);
			double r21 = RBPO::Lab3::Task3::f2(8);
			double r22 = RBPO::Lab3::Task3::f2(10);
			double r3 = RBPO::Lab3::Task3::f3(6);
			double r4 = RBPO::Lab3::Task3::f4(0.01);
			std::cout << "Функция f1: " << r1 << std::endl;
			std::cout << "Функция f2 при x <= 9: " << r21 << std::endl;
			std::cout << "Функция f2 при x > 9: " << r22 << std::endl;
			std::cout << "Функция f3: " << r3 << std::endl;
			std::cout << "Функция f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '4':
		{
			std::cout << "Задача 4" << std::endl;
			double r1 = RBPO::Lab3::Task4::f1(3);
			double r21 = RBPO::Lab3::Task4::f2(8);
			double r22 = RBPO::Lab3::Task4::f2(10);
			double r3 = RBPO::Lab3::Task4::f3(6);
			double r4 = RBPO::Lab3::Task4::f4(0.01);
			std::cout << "Функция f1: " << r1 << std::endl;
			std::cout << "Функция f2 при x <= 9: " << r21 << std::endl;
			std::cout << "Функция f2 при x > 9: " << r22 << std::endl;
			std::cout << "Функция f3: " << r3 << std::endl;
			std::cout << "Функция f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case '5':
		{
			std::cout << "Задача 5" << std::endl;
			double r1 = RBPO::Lab3::Task5::f1(3);
			double r21 = RBPO::Lab3::Task5::f2(8);
			double r22 = RBPO::Lab3::Task5::f2(10);
			double r3 = RBPO::Lab3::Task5::f3(6);
			double r4 = RBPO::Lab3::Task5::f4(0.01);
			std::cout << "Функция f1: " << r1 << std::endl;
			std::cout << "Функция f2 при x <= 9: " << r21 << std::endl;
			std::cout << "Функция f2 при x > 9: " << r22 << std::endl;
			std::cout << "Функция f3: " << r3 << std::endl;
			std::cout << "Функция f4: " << r4 << std::endl;
			std::cout << std::endl;
			break;
		}
		case 'q':
		case 'Q':
			goto exit;
		default:
			std::cout << "Неизвестная команда" << std::endl;
			break;
		}
		system("pause");
	} while (true);
exit: return 0;
}