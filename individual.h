/*
   File: individual.h
   Authors: Sam Lebherz (slebher1), Andrew Sillers (andsil1)
   TSP Genetic Algorithm
   CMSC 491, Spring 2010
   
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
   void Raw_Fitness(double value);
   void Mutate();
   void Print();
   vector<int> Chromosome();
};

#endif
