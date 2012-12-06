#ifndef cerebrum_population_stub_hpp
#define cerebrum_population_stub_hpp

#include <vector>

namespace cerebrum { namespace evo {

using namespace std;

class Agent {
	// STUB
};

struct Selector {
	// STUB
};

class Population { 
public:

	Population() : agents(10) {}
	~Population() {}

	/**
	 * Ranomize a population.
	 */
	void randomize() {}
	/**
	 * Evolve a population using a selector, for a specified number of generations.
	 */
	void evolve(Selector& selector, size_t n_generations) {
		// STUB
	}

	/**
	 * Population size
	 */
	size_t size() {
		// STUB
		return 10;
	}

	Agent& top(size_t i) {
		return agents[i];	
	}

	const Agent& top(size_t i) const {
		return agents[i];
	}

	float fitness(bool seed=false) {
		return 3.14;
	}

private:

	vector<Agent> agents;

};

} }

#endif

