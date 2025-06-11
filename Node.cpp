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

Input_Node::() {
	//Inputs don't have weights or biases
	this->weight = 0;
	this->bias = 0;

}
