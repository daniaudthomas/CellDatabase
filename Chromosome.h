#pragma once


#include <iostream>
#include <list>


using namespace nlohmann;
using namespace std;

#include "Cell.h"
#include "Gene.h"

class Chromosome {

private:
    string chromosomeName;
    string type;
    vector<Gene> genelist;

public:

    /**
     * Constructor
     * @param ChromosomeName
     * @param type
     */
    Chromosome(string chromosomeName = "", string type = "");


    /**
     * Get Name
     * @return name
     */
    string getChromosomeName() const;


    /**
     * Get Type
     * @return type
     */
    string getType() const;


    /**
     * Get list Gene
     * @return list of gene
     */
    vector<Gene> getGeneList() const ;

    /**
     * Set Type
     * @param type
     */
    void setType(string type);


    /**
     * Set Name
     * @param chromosomeName
     */
    void setChromosomeName(string chromosomeName);


    /**
     * Set array Gene
     * @param arrayGene
     */
    void setGeneList(vector<Gene> geneList);


    /**
     * Add Gene
     * @param gene
     */
    void addGene(Gene gene);


    /**
     * Display
     * @param out
     */
    virtual void affiche(ostream & out) const;


    /**
     * Override operator ==
     * @param chromosome
     * @return boolean
     */
    bool operator==(Chromosome chromosome) const;


    /**
     * Copy Constructor
     * @param chromosome
     */
    Chromosome(const Chromosome& chromosome);

};


/**
 * Override operator <<
 * @param out
 * @param c
 * @return
 */
ostream & operator<<(ostream &out, const Chromosome &c);



