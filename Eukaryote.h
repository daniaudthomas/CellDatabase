#pragma once

#include <string>
#include <vector>
#include "Cell.h"
#include "Chromosome.h"

using namespace std;
using namespace nlohmann;

class Eukaryote
{
public:
      /**
     * Constructor
     * @param id
     * @param size
     * @param OrganeName
     */
    Eukaryote(string id = "", double size = 0, string organeName = "");


     /**
     * Get name
     * @return string
     */
    string getOrganeName() const;

    
     /**
     * Set name
     * @param name
     */
    void setOrganeName(string name);


     /**
     * Get List of chromosome
     * @return vector<Chromosome>
     */
    vector<Chromosome> getChromosomeList() const;


    /**
     * Set chromosome List
     * @param chromosomeList
     */
    void setChromosomeList(vector<Chromosome> chromosomeList);


     /**
     * Add Chromosome
     * @param chromosome
     */
    void addChromosome(Chromosome chromosome);









private:
 string organeName;
 vector<chromosome> chromosomeList;
};