#include "Node.hpp"


Node::Node(int weight, int bias) {
    this->weight = weight;
    this->bias = bias;
}

int Node::get_bias() {
    return this->bias;
}

int Node::get_weight() {
    return this->weight;
}

void Node::set_weight(int weight) {
	this->weight = weight;
}

void Node::set_bias(int bias) {
	this->bias = bias;
}

int Node::get_value() {
	return this->value;
}

void Node::set_value(int value) {
	this->value = value;
}

Input_Node::Input_Node(int value) {
	this->value = value;
}

Output_Node::Output_Node(int value, int weight, int bias) {
	this->weight = weight;
	this->bias = bias;
	this->value = value;
}