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
