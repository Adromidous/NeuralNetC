#ifndef NODE_HPP
#define NODE_HPP

#include <vector>

class Node {
    protected:
        int weight;
        int bias;
        vector<Node> input_nodes;
        vector<Node> output_nodes;
    
    public:
        Node(int weight, int bias);
        int get_bias();
        int get_weight();
	int set_weight();
	int set_bias();
};

class Input_Node : public Node {
    
    public: 
	vector<Node> output_nodes;
	int set_output(vector<Node> output);



}; 

#endif
