
#include <iostream>
#include <windows.h>

enum class months {
	Январь = 1, 
	Февраль, 
	Март, 
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
}; 

int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int input_val_month = 1;

	while (input_val_month)
	{		
		std::cout << "Введите номер месяца: ";
		std::cin >> input_val_month;
		if (input_val_month) {
			months month = static_cast<months>(input_val_month);
			switch (month)
			{
			case months::Январь :
				std::cout << "Январь" << std::endl;
				break;
			case months::Февраль:
				std::cout << "Февраль" << std::endl;
				break;
			case months::Март:
				std::cout << "Март" << std::endl;
				break;
			case months::Апрель:
				std::cout << "Апрель" << std::endl;
				break;
			case months::Май:
				std::cout << "Май" << std::endl;
				break;
			case months::Июнь:
				std::cout << "Июнь" << std::endl;
				break;
			case months::Июль:
				std::cout << "Июль" << std::endl;
				break;
			case months::Август:
				std::cout << "Август" << std::endl;
				break;
			case months::Сентябрь:
				std::cout << "Сентябрь" << std::endl;
				break;
			case months::Октябрь:
				std::cout << "Октябрь" << std::endl;
				break;
			case months::Ноябрь:
				std::cout << "Ноябрь" << std::endl;
				break;
			case months::Декабрь:
				std::cout << "Декабрь" << std::endl;
				break;
			default:
				std::cout << "Неправильный номер!" << "\n";
				break;
			}	
		}

	}
	std::cout << "До свидания" << std::endl;
}