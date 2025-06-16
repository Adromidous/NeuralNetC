#include "Node.hpp"


Node::Node(int weight=0, int bias=0) {
    this->weight = weight;
    this->bias = bias;
}

int Node::get_bias() {
    return this->bias;
}

int Node::get_weight() {
    return this->weight;
}

void Node::set_weight(int* weight) {
	this->weight = weight;
}

void Node::set_bias(int* bias) {
	this->bias = bias;
}

int Node::get_value() {
	return this->value;
}

void Node::set_value(int value=0) {
	this->value = value;
}

int Node::calculate_value() {

	int res = 0;

	for (int i = 0; i < this->input_nodes.size(); i++) {
		Node temp = this->input_nodes[i];
		int* temp_bias = this->bias;
		int* temp_weight = this->weight;

		res = res + temp_bias[i] + (temp.value * temp_weight[i]);
	}

	return res;

}

int Node::RELU(int value) {
	if (value > 0) {
		return value;
	}

	return 0;
}

Input_Node::Input_Node(int value=0) {
	this->value = value;
}

Input_Node::calculate_value() { //Override
	return -1; //Input node doesn't need values calculated. 
}

Input_Node::RELU(int value) {
	return value;
} 

Output_Node::Output_Node(int value) {
	this->weight = weight;
}