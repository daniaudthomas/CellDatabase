#pragma once

#include <string>
#include <iostream>
#include <list>
#include <algorithm>

#include "Eukaryote.h"
#include "Prokaryote.h"
#include "Cell.h"



using namespace nlohmann;
using namespace std;

class Repository {

public:

 /**
     * Get array Eukaryote
     * @return list<Eukaryote>
     */
    vector<Eukaryote> getEukaryoteList() const ;


    /**
     * Set array Eukaryote
     * @param arrayEukaryote
     */
    void setEukaryoteList(vector<Eukaryote> EukaryoteList);


    /**
     * Get array Prokaryote
     * @return list<Prokaryote>
     */
    vector<Prokaryote> setProkaryoteList() const ;


    /**
     * Set array Prokaryote
     * @param arrayProkaryote
     */
    void setProkaryoteList(vector<Prokaryote> ProkaryoteList);


    /**
     * Add Eukaryote
     * @param euk
     */
    void addEukaryote(Eukaryote euk);


    /**
     * Add Prokaryote by id
     * @param pro
     */
    void addProkaryote(Prokaryote pro);


    /**
     * Delete Eukaryote by id
     * @param id
     */
    void delEukaryoteById(string id);


    /**
     * Delete Prokaryote
     * @param id
     */
    void delProkaryoteById(string id);


    /**
     * Delete a cell by id
     * @param id
     */
    void delCellById(string id);


    /**
    * Display
    * @param out
    */
    virtual void affiche(ostream & out) const;

};


/**
 * Override operator <<
 * @param out
 * @param d
 * @return
 */
ostream & operator<<(ostream &out, const Database &d);


   





private:
    vector<Eukaryote> EukaryoteList;
    vector<Prokaryote> ProkaryoteList;
