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
	Input_Node(); //Going to use this function to set weight and bias to 0.
 
	vector<Node> output_nodes;
	int set_output(vector<Node> output);
	int insert_output(Node output_node);
	
};

class Output_Node : public Node {
    
    public:
	Output_Node(); //Going to use this function to set weight and bias to 0.

	vector<Node> input_nodes;
	int set_input(vector<Node> output);
	int insert_input(Node output_node);
	
};

 

#endif
