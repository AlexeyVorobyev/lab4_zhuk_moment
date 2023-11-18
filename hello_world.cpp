#include <iostream>

using namespace std;

int main() {

	if (true) {
		if (true) {
			if (true) {
				goto mark1;
			}
		}
	}
	else {
		goto mark2;
	}
mark1:
	cout << "Hello world from AlexeyVorobyev";
	return 1;
mark2:
	return 1;
}