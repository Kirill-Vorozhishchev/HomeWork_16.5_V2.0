#include <iostream>
#include <ctime>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	const int N = 3;

	int sum = 0;

	int array[N][N] = { {0,1},{2,3} };

	for (int i = 0; i < N; i++)
	{
		sum = sum;

		for (int j = 0; j < N; j++)
		{

			std::cout << array[i][j];
			array[i][j] = i + j;
			sum = N + N;
		}
		std::cout << '\n';
	}
	cout << sum;

	std::cout << '\n';

	time_t t;
	time(&t);
	char* curent_time = ctime(&t);
	cout << "curent_time =" << curent_time;

	sum = N + N + curent_time[14] % N;
	std::cout << sum; N + N + curent_time[14] % N << '\n';

	return 0;
}