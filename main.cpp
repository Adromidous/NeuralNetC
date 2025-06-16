#include <iostream>
#include "Node.hpp"

int main() {
	std::cout << "Creating Input Node" << std::endl;
	Input_Node i1 = Input_Node(3);

	std::cout << "INPUT NODE VALUE: " << i1.get_value() << std::endl;

	return 0;
}

