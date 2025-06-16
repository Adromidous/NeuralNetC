#include <iostream>
#include "Node.hpp"
#include "NeuralNetwork.hpp"

int main() {
	const int NUM_INPUT = 1;
	const int NUM_OUTPUT = 1;
	const int NUM_HIDDEN_NODES = 3;

	Input_Node* input_node = new Input_Node(5);
	Output_Node* output_node = new Output_Node(0, 1, 1);

	Node* hidden_layer = new Node[NUM_HIDDEN_NODES];

	for (int i = 1; i < NUM_HIDDEN_NODES + 1; i++) {
		hidden_layer[i-1] = Node(i, i); //Weight: i, Bias: i
	}

	std::cout << "---CREATING NEURAL NETWORK---" << std::endl;

	NeuralNetwork nn = NeuralNetwork(NUM_INPUT, NUM_HIDDEN_NODES, NUM_OUTPUT, input_node, hidden_layer, output_node);

	std::cout << "---NEURAL NETWORK CREATED---" << std::endl;

	nn.forward_pass();

	int output_value = nn.get_output_value();

	std::cout << "OUTPUT VALUE: " << output_value << std::endl;

	delete input_node;
	input_node = NULL;

	delete output_node;
	output_node = NULL;

	delete[] hidden_layer;
	hidden_layer = NULL;

	return 0;
}

