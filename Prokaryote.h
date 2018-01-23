#pragma once

#include <string>
#include <vector>
#include "Cell.h"
#include "Chromosome.h"

using namespace std;
using namespace nlohmann;

class Prokaryote : public Cell
{
public:

 /**
     * Constructor
     * @param id
     * @param size
     * @param chromosome
     */
    Prokaryote(string id = "", double size = 0, Chromosome chromosome = Chromosome());


    /**
     * Get Chromosome
     * @return
     */
    Chromosome getChromosome() const;


    /**
     * Set Chromosome
     * @param chromosomePro
     */
    void setChromosome(Chromosome chromosomePro);


      /**
     * Get Bacterium
     * @return
     */
    string getBacteriumName() const;


    /**
     * Set Chromosome
     * @param bacteriumName
     */
    void setBacterimName(string bacteriumName);



    





private:
   string bacteriumName
   Chromosome chromosomePro

};