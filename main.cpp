#include <iostream>
#include <vector>

void Solution(int N, const std::vector<int> Arr1, const std::vector<int> Arr2)
{
	std::vector<int> MyMap(N, 0);
	for (int i = 0; i < N; ++i)
	{
		MyMap[i] = Arr1[i] | Arr2[i];
	}

	for (int i = 0; i < N; ++i)
	{
		int Pow = 1 << (N - 1);

		for (int j = 0; j < N; ++j)
		{
			if (Pow & MyMap[i])
			{
				std::cout << "#";
			}
			else
			{
				std::cout << " ";
			}
			Pow = Pow >> 1;
		}
		std::cout << std::endl;
	}
}

int main()
{
	int N = 5;
	std::vector<int> Arr1 = { 9, 20, 28, 18, 11 };
	std::vector<int> Arr2 = { 30, 1, 21, 17, 28 };

	Solution(N, Arr1, Arr2);

	return 0;
}