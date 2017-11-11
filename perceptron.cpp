#include "perceptron.h"

// Perceptron (constructor)
// Given the number of inputs, a learning rate, and a threshold, creates a
// new Perceptron object
Perceptron::Perceptron(int n, double lr, double thresh) : weights(n)
{
    num_inputs = n;
    learning_rate = lr;
    threshold = thresh;
}

// Perceptron (destructor)
// Deallocates memory for the Perceptron object
Perceptron::~Perceptron()
{
}

// Perceptron (copy constructor)
//
Perceptron::Perceptron(const Perceptron &other)
{
    std::vector<double> temp(num_inputs);
    temp = other.weights;

    this->weights = temp;
}

// get_learning_rate
// Returns the learning rate of the Perceptron
double Perceptron::get_learning_rate() const
{
  return learning_rate;
}

// set_learning_rate
// Sets the learning rate of the Perceptron to a desired rate
void Perceptron::set_learning_rate(const double& lr)
{
  learning_rate = lr;
}

// get_threshold
// Returns the threshold of the Perceptron
double Perceptron::get_threshold() const 
{
  return threshold;
}

// set_threshold
// Sets the threshold of the Perceptron to a desired value
void Perceptron::set_threshold(const double& thresh)
{
  threshold = thresh;
}

// get_weights
// Returns the weights
std::vector<double> Perceptron::get_weights() const
{
  return weights;
}

// set_weights
// Sets the weights of the Perceptron to desired values
void Perceptron::set_weights(const std::vector<double>& w)
{
  weights = w;
}
