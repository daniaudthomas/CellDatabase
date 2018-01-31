#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Cell.h"
#include "Chromosome.h"

using namespace std;
//using namespace nlohmann;

class Eukaryote : public Cell {

 private:
    string organeName;
    vector<Chromosome> chromosomeList;


public:
      /**
     * Constructor
     * @param id
     * @param size
     * @param OrganeName
     */
    Eukaryote(int id = 0, double size = 0, string organeName = "");


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
     * Display
     * @param out
     */
    virtual void affiche(ostream & out) const;



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



    /**
     * Override operator ==
     * @param euk
     * @return bool
     */
    bool operator==(Eukaryote eukaryote) const;


    /**
     * Copy Constructor
     * @param euk
     */
    Eukaryote(const Eukaryote& eukaryote);

};


    /**
    * Override operator <<
    * @param out
    * @param c
    * @return
    */
    ostream & operator<<(ostream &out, const Eukaryote &e);








