#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char const *argv[])
{
	char	c;

	if (argc == 1) {
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int j = 1; j < argc; j++) {
			for (size_t i = 0; i < strlen(argv[j]); i++) {
				c = toupper(argv[j][i]);
				std::cout << c;
			}
			if (j < argc - 1) {
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
	return 0;
}