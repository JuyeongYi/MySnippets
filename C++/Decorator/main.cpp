#include "DecoTemplate.h"
#include <iostream>

void test1(int print) {
	std::cout << print << std::endl;
}

void test2(int print1, int print2) {
	std::cout << print1 << ", " << print2 << std::endl;
}

int retTest(int p1) {
	std::cout << "This fuction return value" << std::endl;
	return p1;
}

int main() {
	std::cout << "Test!" << std::endl;
	DecoVoid(test1, 5);
	DecoVoid(test2, 4, 5);
	std::cout << DecoRet(retTest, 6);
}


