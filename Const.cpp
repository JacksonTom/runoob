#include <iostream>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main() {
	int area = 0;
	int area1 = 0;
	const int LENGTH1 = 20;
	const int WIDTH1 = 15;
	const char NEWLINE1 = '\n';

	area = LENGTH * WIDTH;
	std::cout << area << NEWLINE;

	area1 = LENGTH1 * WIDTH1;
	std::cout << area1 << NEWLINE1;									

}