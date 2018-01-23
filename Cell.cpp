#include "Cell.h"

// Constructor

Cell::Cell(double size,vector<string>proteinList) 
: size(size),
  proteinList(proteinList),
  id(counter)

{
    compteur++;
}

double Cell::getsize() const {
    return size;
}

vector<string> Cell::getproteinList() const {
    return proteinList;
}

int Cell::getid() const {
    return id;
}

void Cell::setsize(double size){
    size = size;
}

void Cell::setproteinList(vector<string> proteinList){
   proteinList.swap(proteinList);
}

void Cell::setid(int id){
    id = id;
}