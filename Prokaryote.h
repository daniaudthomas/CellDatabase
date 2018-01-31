#pragma once

#include <iostream>

#include <vector>
#include "Cell.h"
#include "Chromosome.h"

using namespace std;
//using namespace nlohmann;

class Prokaryote : public Cell {

private:
//string bacteriumName
   Chromosome chromosomePro;



public:

 /**
     * Constructor
     * @param id
     * @param size
     * @param chromosome
     */
    Prokaryote(int id = 0, double size = 0, Chromosome chromosome = Chromosome());


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
     * Display
     * @param out
     */
    virtual void affiche(ostream &out) const;



      /**
     * Get Bacterium
     * @return
     */
    //string getBacteriumName() const;


    /**
     * Set Chromosome
     * @param bacteriumName
     */
    //void setBacterimName(string bacteriumName);


     /**
     * Override operator ==
     * @param pro
     * @return
     */
    bool operator==(Prokaryote pro) const;

};


/**
 * Override operator <<
 * @param out
 * @param p
 * @return
 */
ostream & operator<<(ostream &out, const Prokaryote &p);

    





