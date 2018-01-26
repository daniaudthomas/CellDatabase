#pragma once

#include <string>
#include <iostream>

using namespace std;
using namespace nlohmann;

class Gene {

public:

    /**
     * Constructor
     * @param nameGene
     * @param locus
     */
    Gene(string genName = "", string locus = "");


    /**
     * Get name
     * @return string
     */
    string getGeneName() const;

    /**
     * Get locus
     * @return string
     */
    string getLocus() const;


    /**
     * Set name
     * @param name
     */
    void setGeneName(string name);


    /**
     * Set locus
     * @param locus
     */
    void setLocus(string locus);


    /**
     * Display
     * @param out
     */
    virtual void affiche(ostream &out) const;


    /**
     * Override operator ==
     * @param gene
     * @return
     */
    bool operator==(Gene gene) const;


    /**
     * Copy Constructor
     * @param gene
     */
    Gene(const Gene& gene) : geneName(gene.geneName), locus(gene.locus){};

};


/**
 * Override operator <<
 * @param out
 * @param g
 * @return
 */
ostream & operator<<(ostream &out, const Gene &g);


private:
    string geneName;
    string locus;