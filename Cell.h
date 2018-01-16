#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Protein.h"

using namespace std;

class Cell
{
public:

    /**
     * Constructor
     * @param id
     * @param size
     */
    Cell(double size = 0,string id = "");
  
  
     /**
     * Get Id Cell
     * @return id
     */
    int getId() const;

  
  /**
     * Get size Cell
     * @return size
     */
  double getSize() const;


 /**
     * Get list of Cell
     * @return Proteinlist
     */
  vector<string> getproteinList() const;
  
  //mutateur set


  void setid(int id);

  /**
     * Set size
     * @param size
     */
 void setsize(double size);


    /**
     * Set Protein list
     * @param proteinList
     */
 void setproteinList(vector<string> proteinList);

protected:
    double size;
    vector<string> proteinList;
    int id;


};










