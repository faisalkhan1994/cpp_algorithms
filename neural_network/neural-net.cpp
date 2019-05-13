// neural-net.cpp
#include <vector>
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <cmath>

using namespace std;

struct connections
{
	double weight;
	double deltaWeight;

}

class Neuron{};

typedef vector<Neuron> Layer;

class Neuron
{
	public:
		Neuron(unsigned numOutputs, unsigned index);
		void setOutputVal(double val) { m_outputVal = val; }
		double getOutputVal() const { return m_outputVal; }
                void feedForward(const Layer &prevLayer);

	private:
		static double transferFunction(double sum);
		static double transferFunctionDerivative(double sum);
		static double randomWeight() { return rand() / double (RAND_MAX);}
		double m_outputVal;
		double m_index;
		vector<connections> m_outputWeight;
};


double Neuron::transferFunction(double x) 
{
	return tanh(x);
}

double Neuron::transferFunctionDerivative(double x)
{
	return 1 - x * x;
}	

void Neuron::feedForward(const Layer &prevLayer)
{
	double sum = 0.0;

	for (unsigned n = 0; n < prevlayer.size(); ++n) {
		sum += prevlayer[n].getOutputVal() * prevLayer[n].m_outputWeights[index].weight;
	}

	m_outputVal = Neuron::transferFunction(sum);

}


Neuron::Neuron(unsigned numOutputs, unsigned index)
{
	for (unsigned c = 0; c < numOutputs; ++c) {
		m_outputWeights.push_back(connections());
		m_outputWeights.back().weight = randomWeight();
	}

	m_index = index;
}

class Net
{
	public:
		Net(const vector<unsigned> &topology);
		void feedForward(const vector<double> &inputVals){};
		void backProp(const vector<double> &targetVals){};
		void getResults(vector<double> &resultVals) const{};

	private:
		vector<Layer> m_layers;
};

void Net::backProp(const vector<double> &targetVals)
{
	

}

void Net::feedForward(const vector<double> &inputVals)
{
	assert(inputVals.size() = m_layers[0].size() - 1);
        
	for (unsigned i = 0; i < inputVals.size(); ++i) {
		m_layers[0][i].setOutputVal(inputVals[i]);
	}

	//Forward propagation
	for (unsigned layerNum = 1; layerNum < m_layers.size(); ++layerNum) {
		Layer &prevLayer = m_layers[layerNum - 1];
		for (unsigned n = 0; n < m_layers.[layerNum].size() - 1; ++n) {
			m_layers[layerNum][n].feedForward(prevLayer);
		}
	}
}


Net::Net(const vector<unsigned> &topology)
{
	unsigned numLayers = topology.size();

	for (unsigned layerNum = 0; layerNum < numLayers; ++layerNum) {
		m_layers.push_back(Layer());
		unsigned numOutputs = layerNum == topology.size() - 1 ? 0 : topology[layerNum + 1];

		for (unsigned neuronNum = 0; neuronNum <= topology[layerNum]; ++neuronNum) {
			m_layers.back().push_back(Neuron(numOutputs, neuronNum));
			cout << "Made a Neuron" << endl;
		}

	}

}
int main()
{
	vector<unsigned> topology;
	topology.push_back(3);
	topology.push_back(2);
	topology.push_back(1);
	Net myNet(topology);

	vector<double> inputVals;
	myNet.feedForward(inputVals);

	vector<double> targetVals;
	myNet.backProp(targetVals);

	vector<double> resultVals;
	myNet.getResults(resultVals);


}
