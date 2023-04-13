#include <iostream>
#include <cctype>
#include <string.h>

int main (int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argc != 1)
		{
			i = -1;
			while (argv[j][++i])
			{
				if (std::isalpha(argv[j][i]))
				{
					argv[j][i] = std::toupper(argv[j][i]);
					std::cout << argv[j][i];
				}
				else
					std::cout << argv[j][i];
			}
			std::cout << " ";
			j++;
			argc--;
		}
		std::cout << std::endl;
	}
}