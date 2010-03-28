/*
   Individual Class - Maintains an individual which represents a
                      path in the TSP.
*/


#ifndef _INDIVIDUAL_H_
#define _INDIVIDUAL_H_

#include <vector>

using namespace std;

class Individual {

protected:
   vector<int> chromosome;
   double raw_fitness;

public:
   Individual(vector<int> path);
   double Raw_Fitness();
   void Mutate();
   void Print();
};

#endif
