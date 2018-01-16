#pragma once

#include <string>
#include <vector>
#include "Cell.h"


using std::vector;

class Database
{
public:
    Database(vector<Cell>CellList);
    void addCell();
    void deleteCell();
    void displayCellProcaryotic();
    void displayCellEucaryotic();
    void displayName();
    void displaySize();
    void displayCellChromosome();

   





private:
    vector<Cell>CellList;

};