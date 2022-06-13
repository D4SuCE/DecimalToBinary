#include <cmath>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>

int main()
{
	while (1)
	{
		std::cout << "1) Convert Binary to Decimal" << std::endl
				  << "2) Convert Decimal to Binary" << std::endl
				  << "3) Exit" << std::endl;

		int choose;
		std::cin >> choose;
		std::cout << std::endl;

		switch (choose)
		{
			case 1:
			{
				std::cout << "Enter a number: ";
				int b;
				std::cin >> b;

				int length = 1;

				std::string bb = std::to_string(b);

				while (b /= 10)
				{
					length++;
				}

				int res = 0;


				int lLength = length - 1;

				for (int i = 0; i < length; i++)
				{
					std::stringstream ss;
					int num;
					ss << bb[i];
					ss >> num;
					res += num * std::pow(2, lLength);
					lLength--;
				}

				std::cout << "Answer: " << res << std::endl;
				break;
			}

			case 2:
			{
				std::cout << "Enter a number: ";
				int a;
				std::cin >> a;

				std::vector<int> result;

				while (a != 1)
				{
					result.push_back(a % 2);
					a = a / 2;
				}

				result.push_back(a);

				std::reverse(result.begin(), result.end());

				std::cout << "Answer: ";

				for (auto i : result)
				{
					std::cout << i;
				}

				std::cout << std::endl;
				break;
			}

			case 3:
			{
				exit(0);
			}

			default:
			{
				std::cout << "What's going wrong!" << std::endl;
				break;
			}
		}
	}	
	return 0;
}