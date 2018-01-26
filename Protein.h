#pragma once

#include <string>
#include <iostream>

using namespace std;
using namespace nlohmann;


public:

    /**
     * Constructor
     * @param id
     * @param name
     */
    Protein(string id = "", string proteinName = "");


    /**
     * Get id
     * @return string
     */
    string getIdProtein() const;


    /**
     * Set id
     * @param id
     */
    void setIdProtein(string id);


    /**
     * Get Name
     * @return string
     */
    string getNameProtein() const;


    /**
     * Set name
     * @param name
     */
    void setNameProtein(string name);


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
    Protein(const Protein& prot) : id(prot.id), name(prot.name){};

};

/**
 * Override operator <<
 * @param out
 * @param p
 * @return
 */
ostream & operator<<(ostream &out, const Protein &p);

class Protein {

private :

    string id;
    string proteinName;



