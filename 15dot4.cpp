#include <iostream>

void PrintOddNumbers(int border, bool isOdd);

int main()
{
	const int N = 10;

	PrintOddNumbers(N, true);
	PrintOddNumbers(N, false);

	return 0;
}

void PrintOddNumbers(int border, bool isOdd)
{
	for (int i = !isOdd; i < border; i += 2)
	{
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}
