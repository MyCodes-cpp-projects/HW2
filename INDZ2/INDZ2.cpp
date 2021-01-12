// INDZ2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	///
	// Individual task(21var)
	///
	{
		setlocale(LC_ALL, "RU");
		 // Получение ифны от юзера + генерация масива
		int counte = 0;
		int n, m;
		std::cout << "Enter n,then enter m" << std::endl;
		std::cin >> n >> m;

		int** A = new int* [n];
		int buf = 0;
		for (int i = 0; i < n; i++)
		{
			A[i] = new int[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cout << "Enter number \n> ";
				std::cin >> buf;
				A[i][j] = buf;
			}

		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cout << " " << A[i][j];
			}
			std::cout << std::endl;
		}

		// Получение инфы от юзера о строке которую надо будет проверять
		int* D = new int[m];
		std::cout << "Enter numbers for == ";
		for (int i = 0; i < m; i++)
		{
			std::cout << "number for " << i + 1 << " element in array" << std::endl;
			std::cin >> buf;
			D[i] = buf;
		}
		// решение задачи
		int countSu = 0;
		int sum = 0;
		int* F = new int[5]{};
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{

				if (D[j] == A[i][j])
				{
					countSu++;
					if (countSu == m)
					{
						sum += 1;
						countSu = 0;
						F[i] = i + 1;
					}

				}
			}

		}
		std::cout << std::endl;

		if (sum == 0)
		{
			std::cout << "Совпадений не найдено" << std::endl;
		}
		else
		{
			std::cout << "Найдено " << sum << " совпадений в строках с индексом(-ами): " << std::endl;

			for (int i = 0; i < n; i++)
			{
				if (F[i] != 0)
				{
					std::cout << F[i] << std::endl;
				}
			}
		}
		// Очистка памяти
		for (int i = 0; i < n; i++)
		{
			delete[] A[i];
		}
		delete[] A;
		delete[] D;
		delete[] F;
	}
	///
	// Additional task (29)
	///
	{
		 //  Получение данных от юзера + генерация эррея
		int n;
		std::cout << "Enter n" << std::endl;
		std::cin >> n;
		int** A = new int* [n];
		for (int i = 0; i < n; i++)
		{
			A[i] = new int[n];
		}
		int num = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				A[i][j] = 0;
			}
			
		}
		// магия в которой происходит ответ на задачу
		A[0][0] = num;
		for (int i = 1; i < n; i++)
		{
			num += 2;
			A[i][i] = num;

		}

		// Вывод финального эррея
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cout << " " << A[i][j];
			}
			std::cout << std::endl;
		}
		 // Очистка памяти
		for (int i = 0; i < n; i++)
		{
			delete[] A[i];
		}
		delete[] A;
	}
	
}

