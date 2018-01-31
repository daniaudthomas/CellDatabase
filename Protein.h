#pragma once

#include <string>
#include <iostream>
#include <vector>

using namespace std;
//using namespace nlohmann;

class Protein {

private :

    int id;
    string proteinName;

public:

    /**
     * Constructor
     * @param id
     * @param name
     */
    Protein(int id = 0, string proteinName = "");


    /**
     * Get id
     * @return strings
     */
    int getIdProtein() const;


    /**
     * Set id
     * @param id
     */
    void setIdProtein(int id);


    /**
     * Get Name
     * @return string
     */
    string getProteinName() const;


    /**
     * Set name
     * @param name
     */
    void setProteinName(string name);


    /**
     * Display
     * @param out
     */
    virtual void affiche(ostream &out) const;

    /**
     * Override operator ==
     * @param prot
     * @return bool
     */
    bool operator==(Protein prot) const;


    /**
     * Copy Constructor
     * @param prot
     */
    Protein(const Protein& prot) : id(prot.id), proteinName(prot.proteinName){};

};

/**
 * Override operator <<
 * @param out
 * @param p
 * @return
 */
ostream & operator<<(ostream &out, const Protein &p);




