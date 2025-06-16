#ifndef NODE_HPP
#define NODE_HPP

#include <vector>

class Node {
    protected:
        int* weight;
        int* bias;
        int value;
        vector<Node> input_nodes;
    
    public:
        Node(int weight=0, int bias=0);
        int get_bias();
        int get_weight();
	    void set_weight();
	    void set_bias();
        int get_value();
        void set_value(int value=0);
        int calculate_value();
        int RELU(int value);
};

class Input_Node : public Node {
    
    public:
	    Input_Node(int value=0); //Going to use this function to set weight and bias to 0.
};

class Output_Node : public Node {
    
    public:
	    Output_Node(int value, int* weight, int* bias); //Going to use this function to set weight and bias to 0.
	    vector<Node> input_nodes;
};

 

#endif
