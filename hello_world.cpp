#include <iostream>
#include <string>

//Very cool function
std::string HelloByName() {
	std::string name;
	std::cin >> name;

	return "Hello world from " + name;
}

int main() {
	std::cout << HelloByName() << std::endl;

	return 1;
}
