#include <iostream>
#include <string>

//Очень крутая функция
std::string
HelloByName()
{
	std::string name;
	std::cin >> name;

	return "Hello world from " + name;
}

int
main()
{
	std::cout << HelloByName() << std::endl;

	return 1;
}
