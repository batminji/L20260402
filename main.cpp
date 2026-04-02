#include <iostream>
#include <vector>

int main()
{
	unsigned long long X = 0;
	int N = 0;

	std::cin >> N;

	unsigned long long Result = 0;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> X;
		
		unsigned long long NPOT = 1;
		
		while (NPOT <= X)
		{
			NPOT = NPOT << 1;
		}

		Result ^= NPOT;
	}	

	std::cout << Result << std::endl;

	return 0;
}