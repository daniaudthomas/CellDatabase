#pragma once



#include <string>
#include <iostream>
#include "Protein.h"
#include <vector>
//using namespace nlohmann;
using namespace std;

class Cell {

protected:
    int id;
    double size;
    vector<Protein> proteinList;
    string type;

public:

    /**
     * Constructor
     * @param id
     * @param size
     */
    Cell(int id = 0, double size = 0);


    /**
     * Get Id Cell
     * @return idName
     */
    int getIdName() const;


    /**
     * Get size Cell
     * @return size
     */
    double getSize() const;


    /**
     * Set IdName
     * @param IdName
     */
    void setIdName(int idName);


    /**
     * Set size
     * @param size
     */
    void setSize(double size);


    /**
     * Set Array Protein
     * @param arrayProtein
     */
    void setProteinList(vector<Protein> proteinList);


    /**
     * Get size Cell
     * @return arrayProtein
     */
    vector<Protein> getProteinList() const;


    /**
     * Display Cell
     */
    virtual void affiche(ostream &) const;


    /**
     * Add protein
     * @param p
     */
    void addProtein(Protein prot);


    /**
     * Get Type
     * @return type
     */
    string getType() const;


    /**
     * Copy Constructor
     * @param cell
     */
    Cell(const Cell& cell);

};


/**
 * Redefinition of << (display)
 * @param out
 * @param c
 * @return
 */
ostream & operator<<(ostream &out, const Cell &c);


