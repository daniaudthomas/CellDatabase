#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#include "Eukaryote.h"
#include "Prokaryote.h"
#include "Cell.h"



//using namespace nlohmann;
using namespace std;

class Repository {

private:
    vector<Eukaryote> eukaryoteList;
    vector<Prokaryote> prokaryoteList;


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
    void setEukaryoteList(vector<Eukaryote> eukaryoteList);


    /**
     * Get array Prokaryote
     * @return list<Prokaryote>
     */
    vector<Prokaryote> getProkaryoteList() const ;


    /**
     * Set array Prokaryote
     * @param arrayProkaryote
     */
    void setProkaryoteList(vector<Prokaryote> prokaryoteList);


    /**
     * Add Eukaryote
     * @param euk
     */
    void addEukaryote(Eukaryote eukaryote);


    /**
     * Add Prokaryote by id
     * @param pro
     */
    void addProkaryote(Prokaryote prokaryote);


    /**
     * Delete Eukaryote by id
     * @param id
     */
    void delEukaryoteById(int id);


    /**
     * Delete Prokaryote
     * @param id
     */
    void delProkaryoteById(int id);


    /**
     * Delete a cell by id
     * @param id
     */
    void delCellById(int id);


    /**
    * Display
    * @param out
    */
    virtual void affiche(ostream & out) const;


/**
 * Override operator <<
 * @param out
 * @param d
 * @return
 */

 /**
     * Display Cell by Id
     * @param id
     */
    void displayCellById(int id);

    /**
     * Display Prokaryote by Id
     * @param id
     */
    void displayProkaryoteById(int id);

    /**
     * Display Eukaryote by Id
     * @param id
     */
    void displayEukaryoteById(int id);


    /**
     * Display all Prokaryote
     */
    void displayOnlyProkaryote();


    /**
     * Display all Eukaryote
     */
    void displayOnlyEukaryote();


    /**
     * Display all Cell between a defined size
     * @param min
     * @param max
     */
    void displayCellSizeBetween(double min, double max);

    /**
     * Display Eukaryote between a defined size
     * @param min
     * @param max
     */
    void displayEukaryoteSizeBetween(double min, double max);

    /**
     * Display Prokaryote between a defined size
     * @param min
     * @param max
     */
    void displayProkaryoteSizeBetween(double min, double max);


    /**
     * Display all Cell having a chromosome with a defined gene
     * @param idGene
     */
    void displayCellHavingChromosomeExprimedGene(int idGene);

    /**
     * Display all Prokaryote having a chromosome with a defined gene
     * @param idGene
     */
   // void displayProkaryoteHavingChromosomeExprimedGene(int idGene);

    /**
     * Display all Eukaryote having a chromosome with a defined gene
     * @param idGene
     */
    //void displayEukaryoteHavingChromosomeExprimedGene(int idGene);



    /**
     * Display all Cell sort by size
     */
    // void displayCellBySize();


};


/**
 * Override operator <<
 * @param out
 * @param d
 * @return
 */
ostream & operator<<(ostream &out, const Repository &d);




   





