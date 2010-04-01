/*
   Individual Class - Maintains an individual which represents a
                      path in the TSP.
*/

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
#include "individual.h"

using namespace std;

   Individual::Individual(vector<int> path) : chromosome(path) { }
   
   double Individual::Raw_Fitness() { return this->raw_fitness; }
   
   vector<int> Individual::Chromosome() { return this->chromosome; }
   
   /*
      Selects two cities at random and exchanges them.
   */
   void Individual::Mutate() {
      int city1, city2;
      // Generate two random indices in { 0, ..., length(chromosome) }
      city1 = rand() % this->chromosome.size();
      city2 = rand() % this->chromosome.size();
      
      // Ensure the cities are unique.
      while(city1 == city2)
         city2 = rand() % this->chromosome.size();
      swap(this->chromosome[city1], this->chromosome[city2]);
   }
   
   void Individual::Print() {
      for(vector<int>::iterator iter = this->chromosome.begin();
          iter != this->chromosome.end(); ++iter) {
         cout << *iter << " ";
      }
      cout << endl;
      cout << this->raw_fitness << endl;
   }

