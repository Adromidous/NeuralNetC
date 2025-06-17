#include "NeuralNetwork.hpp"
#include <iostream>

NeuralNetwork::NeuralNetwork(int num_inputs, int num_hidden_nodes, int num_hidden_layers, int num_outputs, Input_Node* input, Node* hidden_nodes, Output_Node* output) {
    this->num_inputs = num_inputs;
    this->num_hidden_layers = num_hidden_layers;
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

int NeuralNetwork::get_num_hidden_layers() {
    return this->num_hidden_layers;
}

int NeuralNetwork::get_num_outputs() {
    return this->num_outputs;
}

int NeuralNetwork::get_output_value() {
    return (this->output)->get_value();
}

void NeuralNetwork::forward_pass() {

    int input_value = (this->input)->get_value();

    int output_value = 0;
    int output_weight = (this->output)->get_weight();
    int output_bias = (this->output)->get_bias();

    //Pass through hidden layer

    //1. Pass through hidden layer
    //2. Pass to output layer
    for (int i = 0; i < this->get_num_hidden_nodes(); i++) {
        //Calculate hidden layer
        Node* curr_node = &(this->hidden_layer[i]);
        int new_value = this->RELU(curr_node->get_bias() + curr_node->get_weight() * input_value);
        curr_node->set_value(new_value);

        //Calculate output layer
        Node* curr_hidden = &(this->hidden_layer[i]);
        output_value = output_value + this->RELU(curr_hidden->get_value() * output_weight + output_bias);
    }

    (this->output)->set_value(output_value);

}