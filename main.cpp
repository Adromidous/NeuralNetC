#include <iostream>
#include "Node.hpp"
#include "NeuralNetwork.hpp"

int main() {
	const int NUM_INPUT = 1;
	const int NUM_OUTPUT = 1;
	const int NUM_LAYERS = 2;
	const int NUM_HIDDEN_NODES = 3;

	Input_Node* input_node = new Input_Node(5);
	Output_Node* output_node = new Output_Node(0, 1, 1);

	Node* hidden_layer = new Node[NUM_LAYERS * NUM_HIDDEN_NODES];

	for (int j = 0; j < NUM_LAYERS; j++) {
		for (int i = 0; i < NUM_HIDDEN_NODES; i++) {
			hidden_layer[i * NUM_HIDDEN_NODES + j] = Node(i, j);
		}
	}

	NeuralNetwork nn = NeuralNetwork(NUM_INPUT, NUM_HIDDEN_NODES, NUM_LAYERS, NUM_OUTPUT, input_node, hidden_layer, output_node);

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

