# distutils: language = c++
# distutils: sources = population.cpp


cdef extern from "population.hpp" namespace "cerebrum::evo":
      cdef struct Agent:
        pass
     
      cdef struct Selector:
        pass
    
      cdef cppclass Population:
        Population() except +
        void randomize()
        void evolve(Selector &selector,size_t n_generations) 
        size_t size()
        Agent& top(int)
        int fitness(bool)
	
        

cdef class WPopulation:
    cdef Population *thisptr
    def __cinit__(self):
        self.thisptr = new Population()
    def __dealloc__(self):
        del self.thisptr
    def randomize(self):
        self.thisptr.randomize()
    def evolve(self,Selector &selector,n_generations):
        self.thisptr.evolve(selector,n_generations)
    def top(self,index):
        return self.thisptr.top(index)
    def fitness(self,seed):
        return self.thisptr.fitness(seed)
        
