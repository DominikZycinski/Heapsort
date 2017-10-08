//Dominik Zycinski
//Heapsort
//04.04.17

#include <iostream>
#include <string>


void sortowanie(long tab[], long size)
{

	for (int i = 1; i <= size; i++)
	{
		if (tab[i] < tab[2 * i])
		{
			long x;
			x = tab[i];
			tab[i] = tab[2 * i];
			tab[2 * i] = x;
			sortowanie(tab, size);
		}

		if (tab[i] < tab[(2 * i) + 1])
		{

			long x;
			x = tab[i];
			tab[i] = tab[(2 * i) + 1];
			tab[(2 * i) + 1] = x;
			sortowanie(tab, size);
		}
	}

}
void usuwanie(long tab[], long size)
{
	tab[1] = tab[size];
	tab[size] = NULL;
}
void print(long tab[], long size)
{
	for (int i = 1; i <= size; i++)
	{
		std::cout << tab[i] << " ";
	}
}
int main()
{

	long size;
	long n;
	long rozmiar;
	std::cin >> n;

	while (n > 0)
	{
		std::cin >> size;
		rozmiar = size;
		long tab[10000];
		long tablica[10000];
		for (int i = 1; i <= size; i++)
		{
			std::cin >> tab[i];
		}
		int x = 1;
		do
		{
			std::cout << std::endl;
			sortowanie(tab, size);

			tablica[x] = tab[1];
			tablica[rozmiar] = tab[2];

			tablica[x] = tab[1];

			print(tab, size);
			usuwanie(tab, size);

			size--;
			x++;

		} while (size >= 2);
		std::cout << std::endl;

		for (int i = rozmiar; i >0; i--)
		{
			std::cout << tablica[i] << " ";
		}
		std::cout << std::endl;

		n--;



	}

	return 0;

}