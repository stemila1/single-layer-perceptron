#ifndef _PERCEPTRON_H
#define _PERCEPTRON_H

#include <vector>

class Perceptron
{
public:
    // Name:  Perceptron (constructor)
    // Post:  A new Perceptron object
    // TODO: might want lr and thresh to be constant values
    Perceptron(int num_inputs, double learning_rate = 0.1,
               double threshold = 0.5);

    // Name:  Perceptron (destructor)
    // Pre:   A Perceptron object
    // Post:  Deallocates memory for the object
    ~Perceptron();

    // Name:  Perceptron (copy constructor)
    // Post:
    Perceptron(const Perceptron& other);

    // ---------------------- Accessors & Mutators ----------------------
    // Name:  get_learning_rate
    // Pre:   A Perceptron object
    // Post:  Returns the learning rate of the Perceptron
    double get_learning_rate();

    // Name:  set_learning_rate
    // Pre:   A Perceptron object and a desired learning rate
    // Post:  Sets the learning rate of the Perceptron
    void set_learning_rate(const double& learning_rate);

    // Name:  get_threshold
    // Pre:   A Perceptron object
    // Post:  Returns the threshold of the Perceptron
    double get_threshold();

    // Name:  set_threshold
    // Pre:   A Perceptron object and a desired threshold
    // Post:  Sets the threshold of the Perceptron
    void set_threshold(const double& threshold);

    // Name:  get_weights
    // Pre:   A Perceptron object
    // Post:  Returns the weights  of the Perceptron
    std::vector<double> get_weights();

    // Name:  set_weights
    // Pre:   A Perceptron object and desired weights
    // Post:  Sets the weights of the Perceptron
    void set_weights(const std::vector<double>& weights);


private:
    int num_inputs;
    std::vector<double> weights;
    double learning_rate;
    double threshold;
};

#endif
