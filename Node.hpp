#ifndef NODE_HPP
#define NODE_HPP

#include <vector>

class Node {
    private:
        int weight;
        int bias;
        vector<Node> input_nodes;
        vector<Node> output_nodes;
    
    public:
        Node(int weight, int bias);
        int get_bias();
        int get_weight();
};

#endif