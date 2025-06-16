#include "NeuralNetwork.hpp"

NeuralNetwork::NeuralNetwork(int num_inputs, int num_hidden_nodes, int num_outputs, Input_Node* input, Node* hidden_nodes, Output_Node* output) {
    this->num_inputs = num_inputs;
    this->num_hidden_nodes = num_hidden_nodes;
    this->num_outputs = num_outputs;
    //We'll need these variables above when we do a forward pass

    this->input = input;
    this->hidden_layer = hidden_nodes;
    this->output = output;
}

int NeuralNetwork::RELU(int value) {
    if (value > 0) {
        return value;
    }
    return 0;
}

int NeuralNetwork::get_num_inputs() {
    return this->num_inputs;
}

int NeuralNetwork::get_num_hidden_nodes() {
    return this->num_hidden_nodes;
}

int NeuralNetwork::get_num_outputs() {
    return this->num_outputs;
}