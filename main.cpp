#include <iostream>
#include "Node.hpp"

int main() {
	std::cout << "Hello World!" << std::endl;
	Node first = Node(5, 3);

	std::cout << first.get_weight() << std::endl;
	std::cout << first.get_bias() << std::endl;

	return 0;
}

