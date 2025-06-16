#ifndef NEURAL_NET_HPP
#define NEURAL_NET_HPP

#include "Node.hpp"

class NeuralNetwork {
    private:
        int num_inputs;
        //TODO: Add another variable for number of hidden layers
        int num_hidden_nodes;
        int num_outputs;
    public:
        NeuralNetwork(int num_inputs=1, int num_hidden_nodes=1, int num_outputs=1, Input_Node* input=NULL, Node* hidden_nodes=NULL, Output_Node* output=NULL);
        
        Input_Node* input;
        Node* hidden_layer;
        Output_Node* output;
        int RELU(int value);
        int get_num_inputs();
        int get_num_hidden_nodes();
        int get_num_outputs();
        int get_output_value();

        void forward_pass();
};

#endif